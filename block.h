#pragma once
#include <raylib.h>

#include <map>
#include <vector>

#include "colors.h"
#include "position.h"

class Block {
   public:
	int id;
	Block();
	void Draw();
	void SetGridOffset(int grid_start_x, int grid_start_y);
	std::map<int, std::vector<Position>> cells;

   private:
	int cell_size;
	int rotation_state;
	std::vector<Color> colors;
	int grid_start_x;
	int grid_start_y;
};
