#pragma once
#include "blocks.cpp"
#include "grid.h"

class Game {
   public:
	Game();
	Grid grid;
	Block get_random_block();
	std::vector<Block> get_all_blocks();
	void Draw();
	void handle_input();
	void move_block_left();
	void move_block_right();
	void move_block_down();
	void rotate_block();
	bool game_over;
	void Reset();

   private:
	bool is_block_outside();
	bool block_fits();
	void draw_next_block();
	void lock_block();
	std::vector<Block> blocks;
	Block current_block;
	Block next_block;
	Font font;
};
