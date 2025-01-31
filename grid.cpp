#include <raylib.h>

#include <iostream>
#include <vector>

#include "colors.h"
#include "grid.h"

Grid::Grid() {
	num_rows = 20;
	num_colomns = 10;
	cell_size = 50;

	start_x = (GetScreenWidth() - num_colomns * cell_size) / 2;
	start_y = (GetScreenHeight() - num_rows * cell_size) / 2;

	initialize();
	colors = get_cell_colors();
}

void Grid::initialize() {
	for (int row = 0; row < num_rows; ++row) {
		for (int colomn = 0; colomn < num_colomns; ++colomn) {
			grid[row][colomn] = 0;
		}
	}
}

void Grid::print() {
	for (int row = 0; row < num_rows; ++row) {
		for (int colomn = 0; colomn < num_colomns; ++colomn) {
			std::cout << grid[row][colomn] << " ";
		}
		std::cout << std::endl;
	}
}

void Grid::Draw() {
	for (int row = 0; row < num_rows; ++row) {
		for (int colomn = 0; colomn < num_colomns; ++colomn) {
			int cell_value = grid[row][colomn];
			DrawRectangle(start_x + colomn * cell_size + 1, start_y + row * cell_size + 1, (cell_size - 1),
			              cell_size - 1, colors[cell_value]);
		}
	}
}

bool Grid::is_cell_outside(int row, int column) {
	if (row >= 0 && row < num_rows && column >= 0 && column < num_colomns) {
		return false;
	} else {
		return true;
	}
}
