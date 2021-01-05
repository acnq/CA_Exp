module data_ram (
	input wire clk,
	input wire we,
	input wire [31:0] addr,
	input wire [31:0] din,
	output reg [31:0] dout,
	//------------exp7 new---------
	output wire ram_stall,////
	input wire rst,////
	input wire cs////
	//-----------------------------
	);
	
	parameter
		ADDR_WIDTH = 5;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	reg [31:0] addr_previous;
	reg [3:0] counter;
	reg ack;
	
	initial	begin
		$readmemh("data_mem.hex", data);
	end
	
	always @(negedge clk) begin
		if (we && addr[31:ADDR_WIDTH]==0)
			data[addr[ADDR_WIDTH-1:0]] <= din;
	end
	
	reg [31:0] out;
	always @(negedge clk) begin
		if(rst)begin
			counter=0;
			ack=0;
		end
		else begin
			if(addr_previous==addr)begin //�һ�����ôʵ���е����⣬�������&& cs,��Ȼdata_ram��ʹû�б�ѡ��Ҳ�ڷ�����������
			//û��Ҫ�ģ��������м�����ͬ�������⣬�������ʵ������û���κ�sw��lw,���������������ȷ��ţ�Ҳ�п�����������ˡ�
				counter=counter+1;
				if(counter==8)begin
					data[addr[ADDR_WIDTH-1:0]]=din;
					out = data[addr[ADDR_WIDTH-1:0]];
					ack=1;//finish
				end
			end	
			else begin
				counter=0;
				ack=0;
			end
			addr_previous=addr;
		end
	end
	
	assign ram_stall=cs&~ack;
	//--------------------------------
	always @(*) begin
		if (addr[31:ADDR_WIDTH] != 0)
			dout = 32'h0;
		else
			dout = out;
	end
	
endmodule
