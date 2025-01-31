#include <raylib.h>

#include <vector>

#include "block.h"
#include "colors.h"
#include "position.h"

Block::Block() {
	cell_size = 50;
	rotation_state = 0;
	colors = get_cell_colors();
	grid_start_x = 0;
	grid_start_y = 0;
	row_offset = 0;
	column_offset = 0;
}

void Block::SetGridOffset(int grid_start_x, int grid_start_y) {
	this->grid_start_x = grid_start_x;
	this->grid_start_y = grid_start_y;
}

void Block::Draw() {
	std::vector<Position> tiles = get_cell_positions();
	for (Position item : tiles) {
		DrawRectangle(grid_start_x + item.column * cell_size + 1, grid_start_y + item.row * cell_size + 1,
		              cell_size - 1, cell_size - 1, colors[id]);
	}
}

void Block::Move(int rows, int columns) {
	row_offset += rows;
	column_offset += columns;
}
std::vector<Position> Block::get_cell_positions() {
	std::vector<Position> tiles = cells[rotation_state];
	std::vector<Position> moved_tiles;
	for (Position item : tiles) {
		Position new_pos = Position(item.row + row_offset, item.column + column_offset);
		moved_tiles.push_back(new_pos);
	}
	return moved_tiles;
}
