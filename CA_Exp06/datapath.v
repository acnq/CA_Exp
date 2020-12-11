`include "define.vh"
/*���̵ı�����������
xxx_: works in xxx stage
_xxx: generated from xxx stage
*/

/**
 * Data Path for MIPS 5-stage pipelined CPU.
 * Author: Zhao, Hongyu  <power_zhy@foxmail.com>
 */
module datapath (
	input wire clk,  // main clock
	// debug
	`ifdef DEBUG
	input wire [5:0] debug_addr,  // debug address
	output wire [31:0] debug_data,  // debug data
	`endif
	// control signals
	output reg [31:0] inst_data_id,  // instruction
	// not needed output reg is_branch_exe,  // whether instruction in EXE stage is jump/branch instruction
	output reg [4:0] regw_addr_exe,  // register write address from EXE stage
	output reg wb_wen_exe,  // register write enable signal feedback from EXE stage
	// not needed output reg is_branch_mem,  // whether instruction in MEM stage is jump/branch instruction
	output reg [4:0] regw_addr_mem,  // register write address from MEM stage
	output reg wb_wen_mem, 	// register write enable signal feedback from MEM stage
	output reg is_load_exe,
	input wire is_load,
	input wire [2:0] pc_src_ctrl,  // how would PC change to next
	input wire imm_ext_ctrl,  // whether using sign extended to immediate data
	input wire [1:0] exe_a_src_ctrl,  // data source of operand A for ALU
	input wire [1:0] exe_b_src_ctrl,  // data source of operand B for ALU
	input wire [1:0] exe_fwd_a_ctrl, //
	input wire [1:0] exe_fwd_b_ctrl, //
	input wire [3:0] exe_alu_oper_ctrl,  // ALU operation type
	input wire mem_ren_ctrl,  // memory read enable signal
	input wire mem_wen_ctrl,  // memory write enable signal
	input wire [1:0] wb_addr_src_ctrl,  // address source to write data back to registers
	input wire wb_data_src_ctrl,  // data source of data being written back to registers
	input wire wb_wen_ctrl,  // register write enable signal
	// IF signals
	input wire if_rst,  // stage reset signal
	input wire if_en,  // stage enable signal
	output reg if_valid,  // working flag
	output reg inst_ren,  // instruction read enable signal
	output reg [31:0] inst_addr,  // address of instruction needed
	input wire [31:0] inst_data,  // instruction fetched
	// ID signals
	input wire id_rst,
	input wire id_en,
	output reg id_valid,
	// EXE signals
	input wire exe_rst,
	input wire exe_en,
	output reg exe_valid,
	// MEM signals
	input wire mem_rst,
	input wire mem_en,
	output reg mem_valid,
	output wire mem_ren,  // memory read enable signal
	output wire mem_wen,  // memory write enable signal
	output wire [31:0] mem_addr,  // address of memory
	output wire [31:0] mem_dout,  // data writing to memory
	input wire [31:0] mem_din,  // data read from memory
	
	// WB signals
	input wire wb_rst,
	input wire wb_en,
	output reg wb_valid,
	//WB:we need 2 output��
	output reg wb_wen_wb,
	output reg [4:0] regw_addr_wb,
	//������Ҫ��mem�׶��Ƿ���ren �ź�
	output reg mem_ren_mem, 
	output wire rs_rt_equal,
	input wire fwd_m,
	//exp5 new:
	input wire alu_sign,//from controller's "sign"
	
	//exp6 new
	output wire [4:0] addr_r,
	input wire [31:0] data_r,
	output wire [4:0] addr_w,
	output wire [31:0] data_w,
	output wire ir_en,
	output wire [31:0] ret_addr,
	input wire jump_en, //epc_strl
	input wire [31:0] jump_addr //epc
	);
	
	`include "mips_define.vh"
	
	// control signals
	//reg [2:0] pc_src_exe;
	reg [1:0] exe_a_src_exe, exe_b_src_exe;
	reg [3:0] exe_alu_oper_exe;
	reg mem_ren_exe; //mem_ren_mem;output 
	reg mem_wen_exe, mem_wen_mem;
	reg wb_data_src_exe, wb_data_src_mem, wb_data_src_wb;
		
	// IF signals
	wire [31:0] inst_addr_next;
	
	// ID signals
	reg [31:0] inst_addr_id;
	reg [31:0] inst_addr_next_id;
	reg [4:0] regw_addr_id;
	wire [4:0] addr_rs, addr_rt, addr_rd;
	wire [31:0] data_rs, data_rt, data_imm;
	reg [31:0] fwda_id,fwdb_id;//bypass unit's multiplexer output in ID
	
	// EXE signals
	reg [31:0] inst_addr_exe;
	reg [31:0] inst_addr_next_exe;
	reg [31:0] inst_data_exe;
	reg [31:0] data_rs_exe, data_rt_exe, data_imm_exe;
	reg [31:0] opa_exe, opb_exe;
	wire [31:0] alu_out_exe;
	reg [31:0] fwda_exe,fwdb_exe;//bypass unit's multiplexer output in EXE
	reg exe_fwd_m_exe;
	//------------
	reg alu_sign_exe;
	//------------
	reg [31:0] cp0_data_r_exe; //added in exp6
	
	// MEM signals
	reg [31:0] inst_addr_mem;
	//reg [31:0] inst_addr_next_mem;
	reg [31:0] inst_data_mem;
	reg [4:0] data_rs_mem;
	reg [31:0] data_rt_mem;
	reg [31:0] alu_out_mem;
	reg [31:0] branch_target_mem;
	//------------------
	reg mem_fwd_m_mem;////
	
	// WB signals---------------------------
	//reg wb_wen_wb; moved upward to the output module
	reg [31:0] alu_out_wb;
	reg [31:0] mem_din_wb;
	//reg [4:0] regw_addr_wb;moved upward to the output module
	reg [31:0] regw_data_wb; 
	
	// debug
	`ifdef DEBUG
	wire [31:0] debug_data_reg;
	reg [31:0] debug_data_signal;
	
	always @(posedge clk) begin
		case (debug_addr[4:0])
			0: debug_data_signal <= inst_addr;
			1: debug_data_signal <= inst_data;
			2: debug_data_signal <= inst_addr_id;
			3: debug_data_signal <= inst_data_id;
			4: debug_data_signal <= inst_addr_exe;
			5: debug_data_signal <= inst_data_exe;
			6: debug_data_signal <= inst_addr_mem;
			7: debug_data_signal <= inst_data_mem;
			8: debug_data_signal <= {27'b0, addr_rs};
			9: debug_data_signal <= data_rs;
			10: debug_data_signal <= {27'b0, addr_rt};
			11: debug_data_signal <= data_rt;
			12: debug_data_signal <= data_imm;
			13: debug_data_signal <= opa_exe;
			14: debug_data_signal <= opb_exe;
			15: debug_data_signal <= alu_out_exe;
			16: debug_data_signal <= 0;
			17: debug_data_signal <= 0;
			18: debug_data_signal <= {19'b0, inst_ren, 7'b0, mem_ren, 3'b0, mem_wen};
			19: debug_data_signal <= mem_addr;
			20: debug_data_signal <= mem_din;
			21: debug_data_signal <= mem_dout;
			22: debug_data_signal <= {27'b0, regw_addr_wb};
			23: debug_data_signal <= regw_data_wb;
			default: debug_data_signal <= 32'hFFFF_FFFF;
		endcase
	end
	
	assign
		debug_data = debug_addr[5] ? debug_data_signal : debug_data_reg;
	`endif
	
	// IF stage
	assign
		inst_addr_next = inst_addr + 4;
	
	always @(*) begin
		if_valid = ~if_rst & if_en;
		inst_ren = ~if_rst;
	end
	//new multiplexer:
	always @(posedge clk) begin
		if (if_rst) begin
			inst_addr <= 0;
		end
		else if (if_en) begin
			//add another branch in chap6 interruption
			if(jump_en) begin
				inst_addr <= jump_addr;
			end
			else begin
			//the remaining is the same as the exp previously done
				case(pc_src_ctrl)
					PC_NEXT: inst_addr<=inst_addr_next;//0
					PC_JR: inst_addr<=fwda_id;//1,=addr_rs
					PC_BRANCH: inst_addr<=inst_addr_next_id[31:0]+{data_imm[29:0], 2'b0};//3
					PC_JUMP: inst_addr<={inst_addr_id[31:28],inst_data_id[25:0],2'b0};//2
				endcase
			end
		end 
	end
	
	// ID stage
	always @(posedge clk) begin
		if (id_rst) begin
			id_valid <= 0;
			inst_addr_id <= 0;
			inst_data_id <= 0;
			inst_addr_next_id <= 0;
		end
		else if (id_en) begin
			id_valid <= if_valid;
			inst_addr_id <= inst_addr;
			inst_data_id <= inst_data;
			inst_addr_next_id <= inst_addr_next;
		end
	end
	
	assign
		addr_rs = inst_data_id[25:21],
		addr_rt = inst_data_id[20:16],
		addr_rd = inst_data_id[15:11],
		data_imm = imm_ext_ctrl ? {{16{inst_data_id[15]}}, inst_data_id[15:0]} : {16'b0, inst_data_id[15:0]};
	
	//new bypass unit��
	always @(*) begin
		fwda_id = data_rs_exe;
		fwdb_id = data_rt_exe;
		case (exe_fwd_a_ctrl)
			ID_A_FWD_ALUOUT: fwda_id = alu_out_exe;//0
			ID_A_FWD_MEMIN: fwda_id = alu_out_mem;//1
			ID_A_FWD_MEMOUT: fwda_id = mem_din;//2
			ID_A_FWD_RS: fwda_id = data_rs;//3
		endcase
		case (exe_fwd_b_ctrl)
			ID_B_FWD_ALUOUT:fwdb_id = alu_out_exe;//0
			ID_B_FWD_MEMIN: fwdb_id = alu_out_mem;//1
			ID_B_FWD_MEMOUT: fwdb_id = mem_din;//2
			ID_B_FWD_RT: fwdb_id = data_rt;//3
		endcase
	end
	assign rs_rt_equal = (fwda_id == fwdb_id);//judge whether BEQ or BNE
	
	always @(*) begin
		regw_addr_id = inst_data_id[15:11];
		case (wb_addr_src_ctrl)
			WB_ADDR_RD: regw_addr_id = addr_rd;
			WB_ADDR_RT: regw_addr_id = addr_rt;
			WB_ADDR_LINK: regw_addr_id = GPR_RA;
		endcase
	end
	
	assign 
		//MTC0
		data_w = fwdb_id,
		addr_w = inst_data_id[15:11],
		
		//MFC0
		addr_r = inst_data_id[15:11],
		
		ir_en = 1,
		ret_addr = pc_src_ctrl ? inst_addr_id : inst_addr;
	
	regfile REGFILE (
		.clk(clk),
		`ifdef DEBUG
		.debug_addr(debug_addr[4:0]),
		.debug_data(debug_data_reg),
		`endif
		.addr_a(addr_rs),
		.data_a(data_rs),
		.addr_b(addr_rt),
		.data_b(data_rt),
		.en_w(wb_wen_wb),
		.addr_w(regw_addr_wb),
		.data_w(regw_data_wb)
		);
	
	// EXE stage
	always @(posedge clk) begin
		if (exe_rst) begin
		   is_load_exe<=0;
			exe_valid <= 0;
			inst_addr_exe <= 0;
			inst_data_exe <= 0;
			inst_addr_next_exe <= 0;
			regw_addr_exe <= 0;
			exe_a_src_exe <= 0;
			exe_b_src_exe <= 0;
			//--------------------
			data_rs_exe <= 0;
			data_rt_exe <= 0;
			data_imm_exe <= 0;
			exe_alu_oper_exe <= 0;
			mem_ren_exe <= 0;
			mem_wen_exe <= 0;
			wb_data_src_exe <= 0;
			wb_wen_exe <= 0;
			fwda_exe <= 0;
			fwdb_exe <= 0;
			exe_fwd_m_exe<=0;
			//--------------
			alu_sign_exe<=0;
			//---------------
			cp0_data_r_exe <= 0;
		end
		else if (exe_en) begin
		   is_load_exe<=is_load;
			exe_valid <= id_valid;
			inst_addr_exe <= inst_addr_id;
			inst_data_exe <= inst_data_id;
			inst_addr_next_exe <= inst_addr_next_id;
			regw_addr_exe <= regw_addr_id;
			exe_a_src_exe <= exe_a_src_ctrl;
			exe_b_src_exe <= exe_b_src_ctrl;
			data_rs_exe <= data_rs;
			data_rt_exe <= data_rt;
			data_imm_exe <= data_imm;
			exe_alu_oper_exe <= exe_alu_oper_ctrl;
			mem_ren_exe <= mem_ren_ctrl;
			mem_wen_exe <= mem_wen_ctrl;
			wb_data_src_exe <= wb_data_src_ctrl;
			wb_wen_exe <= wb_wen_ctrl;
			fwda_exe <= fwda_id;
			fwdb_exe <= fwdb_id;
			exe_fwd_m_exe<=fwd_m;
			//------------------
			alu_sign_exe<=alu_sign;
			//------------------
			cp0_data_r_exe <= data_r;
		end
	end
	
	//changed -------------------------------------
	always @(*) begin //addded EXE_A/B_IR; in chap 6
		opa_exe = fwda_exe;
		opb_exe = fwdb_exe;
		case (exe_a_src_exe)//0-1
			EXE_A_RS: opa_exe = fwda_exe;////0
			EXE_A_NEXT: opa_exe = inst_addr_next_exe;////1
			EXE_A_SA: opa_exe={27'b0, inst_data_exe[10:6]};////?
			EXE_A_IR: opa_exe = cp0_data_r_exe;
			//EXE_A_BRANCH: opa_exe = inst_addr_next_exe;
			default:;
		endcase
		case (exe_b_src_exe)//0-2
			EXE_B_IMM: opb_exe = data_imm_exe;////0
			EXE_B_FOUR: opb_exe = 3'h4;  ////1
			EXE_B_RT: opb_exe = fwdb_exe;////2
			EXE_B_IR: opb_exe = 0;
			//EXE_B_BRANCH: opb_exe = {data_imm_exe[29:0], 2'b0};
			//default:opb_exe = 32'h0;////
		endcase
	end
	//-------------------------------------------------------

	
	alu ALU (
		.a(opa_exe),
		.b(opb_exe),
		.oper(exe_alu_oper_exe),
		.result(alu_out_exe),
		.sign(alu_sign_exe)////
		);
	
	// MEM stage
	always @(posedge clk) begin
		if (mem_rst) begin
			mem_valid <= 0;
			inst_addr_mem <= 0;
			inst_data_mem <= 0;
			regw_addr_mem <= 0;
			data_rs_mem <= 0;
			data_rt_mem <= 0;
			alu_out_mem <= 0;
			mem_ren_mem <= 0;
			mem_wen_mem <= 0;
			wb_data_src_mem <= 0;
			wb_wen_mem <= 0;
			//--------------------
			mem_fwd_m_mem<=0;////
		end
		else if (mem_en) begin
			mem_valid <= exe_valid;
			inst_addr_mem <= inst_addr_exe;
			inst_data_mem <= inst_data_exe;
			regw_addr_mem <= regw_addr_exe;
			data_rs_mem <= fwda_exe;//why not keep this?
			data_rt_mem <= fwdb_exe;
			alu_out_mem <= alu_out_exe;
			mem_ren_mem <= mem_ren_exe;
			mem_wen_mem <= mem_wen_exe;
			wb_data_src_mem <= wb_data_src_exe;
			wb_wen_mem <= wb_wen_exe;
			//--------------------------------
			mem_fwd_m_mem<=exe_fwd_m_exe;
		end
	end
	
	assign
		mem_ren = mem_ren_mem,
		mem_wen = mem_wen_mem,
		mem_addr = alu_out_mem,
		mem_dout = mem_fwd_m_mem?data_rt_mem:regw_data_wb;
	
	// WB stage
	always @(posedge clk) begin
		if (wb_rst) begin
			wb_valid <= 0;
			wb_wen_wb <= 0;
			wb_data_src_wb <= 0;
			regw_addr_wb <= 0;
			alu_out_wb <= 0;
			mem_din_wb <= 0;
		end
		else if (wb_en) begin
			wb_valid <= mem_valid;
			wb_wen_wb <= wb_wen_mem;
			wb_data_src_wb <= wb_data_src_mem;
			regw_addr_wb <= regw_addr_mem;
			alu_out_wb <= alu_out_mem;
			mem_din_wb <= mem_din;
		end
	end
	
	always @(*) begin
		regw_data_wb = alu_out_wb;
		case (wb_data_src_wb)
			WB_DATA_ALU: regw_data_wb = alu_out_wb;
			WB_DATA_MEM: regw_data_wb = mem_din_wb;
		endcase
	end
	
endmodule
