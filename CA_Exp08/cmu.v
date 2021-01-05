module cmu (
	output wire stall,	// ?? TODO:
	input wire rst,
	// input wire cs,
	input wire clk,
	input wire we,
	input wire [31:0] addr,
	input wire [31:0] din,
	output reg [31:0] dout,
	// ram
	input wire ram_stall,	// ?? TODO:
	output wire ram_rst,
	output reg ram_cs,
	output reg ram_we,
	output reg [31:0]ram_addr,
	output reg [31:0]ram_din,
	input wire [31:0]ram_dout,
	input wire ram_ack 
   );

	assign ram_rst = rst;

	parameter
		S_IDLE = 0,
		S_BACK = 1,
		S_BACK_WAIT = 2,
		S_FILL = 3,
		S_FILL_WAIT = 4;

	reg cache_store = 0;
	reg cache_edit = 0;
	reg cache_invalid = 0;
	wire cache_hit;
	wire [31:0] cache_dout;
	wire cache_valid;
	wire cache_dirty;
	wire [21:0] cache_tag;
	reg [31:0] cache_addr;
	reg [31:0] cache_din;

	cache CACHE (
		.clk(clk),
		.rst(rst),
		.addr(cache_addr),
		.store(cache_store),
		.edit(cache_edit),
		.invalid(cache_invalid),
		.din(cache_din),
		.hit(cache_hit),
		.dout(cache_dout),
		.valid(cache_valid),
		.dirty(cache_dirty),
		.tag(cache_tag)
	);

	reg [2:0] state;
	reg [2:0] next_state;
	
	initial begin
		state = S_IDLE;
		next_state = S_IDLE;
	end

	wire en_r, en_w;
	assign en_r =  ~we;
	assign en_w = we;
	reg[1:0] word_count, next_word_count;

	always @(negedge clk) begin
		if(rst) begin
			state = S_IDLE;
			next_state = S_IDLE;
			word_count = 0;
			next_word_count = 0;
		end else begin
			state = next_state;
			word_count = next_word_count;
			case (state)
				S_IDLE: begin
					next_word_count = 0;	 // TODO: unsure
					if (en_r || en_w) begin
						if (cache_hit) begin
							next_state = S_IDLE;
						end else if (cache_valid && cache_dirty) begin
							next_state = S_BACK;
						end else begin
							next_state = S_FILL; 
							ram_addr = {addr[31:4],4'b0};

						end
					end
				end
				S_BACK: begin
					if (ram_ack) begin
						next_word_count = word_count + 1'h1;
						if (word_count == 2'b11) begin
							next_state = S_BACK_WAIT;
						end else begin
							next_state = S_BACK;
						end
					end else begin
						next_word_count = word_count;
					end
				end
				S_BACK_WAIT: begin
					next_word_count = 0;
					next_state = S_FILL;
				end
				S_FILL: begin
					if (ram_ack) begin
						next_word_count = word_count + 1'h1;
						if (word_count == 2'b11)
							next_state = S_FILL_WAIT;
						else begin
							next_state = S_FILL;
						end
					end else
						next_word_count = word_count;
				end
				S_FILL_WAIT: begin
					next_word_count = 0;
					next_state = S_IDLE;
				end
			endcase
		end
		if (rst) begin
			cache_din = 32'b0;
			cache_addr = 32'b0;
			cache_store = 0;
			cache_edit = 0;
			cache_invalid = 0;
			ram_cs = 0;
			ram_we = 0;
			ram_addr = 32'b0;
			ram_din = 32'b0;
			// stall = 0;
		end else begin
			cache_store = 0;
			cache_edit = 0;
			cache_invalid = 0;
			ram_cs = 0;
			ram_we = 0;
			cache_addr = addr;
			// stall = 1;

			case (next_state)
				S_IDLE: begin
					if (en_r || en_w) begin
						if (cache_hit) begin
							if (en_r) begin
								dout = cache_dout;
							end
							if (en_w) begin
								cache_din = din;
								cache_edit = 1;
							end
							// stall = 0;
						end else if (cache_valid && cache_dirty) begin
							ram_addr = {addr[31:4],4'b0};
							// stall = 1;
						end else begin
							// stall = 1;
						end
					end
				end
				S_BACK: begin
					if (ram_ack) begin
						ram_addr = cache_addr;
						ram_din = cache_dout;
						ram_cs = 1;
						ram_we = 1;
						if (word_count != 2'b11) begin
							cache_addr = cache_addr + 4'b0100;
						end
					end
				end
				S_BACK_WAIT: begin
				end
				S_FILL: begin
					if (ram_ack) begin
						if (en_r && cache_addr==addr) begin
							dout = cache_dout;
						end
						cache_addr = ram_addr;
						cache_din = ram_dout;
						ram_cs = 1;
						ram_we = 0;
						if (en_w && cache_addr==addr) begin
							cache_edit = 1;
						end else begin
							cache_store = 1;
						end
						if (word_count != 2'b11) begin
							ram_addr = ram_addr + 4'b0100;
						end
					end
				end
				S_FILL_WAIT: begin
					// stall = 0;
				end
			endcase
		end
	end
	assign stall = ~(next_state == S_IDLE && cache_hit);

endmodule