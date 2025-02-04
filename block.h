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
	void Set_grid_offset(int grid_start_x, int grid_start_y);
	void Move(int rows, int columns);
	void rotate();
	void undo_rotation();
	std::map<int, std::vector<Position>> cells;
	std::vector<Position> get_cell_positions();

   private:
	int cell_size;
	int rotation_state;
	std::vector<Color> colors;
	int grid_start_x;
	int grid_start_y;
	int row_offset;
	int column_offset;
};
