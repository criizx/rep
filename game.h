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

   private:
	std::vector<Block> blocks;
	Block current_block;
	Block next_block;
};
