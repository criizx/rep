#include <raylib.h>

#include <iostream>
#include <vector>

#include "grid.h"

Grid::Grid() {
	num_rows = 20;
	num_colomns = 10;

	cell_size = 50;
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

std::vector<Color> Grid::get_cell_colors() {
	Color darkGrey = {127, 127, 127, 255};
	Color cyan = {0, 255, 255, 255};
	Color yellow = {255, 255, 0, 255};
	Color purple = {128, 0, 128, 255};
	Color orange = {255, 127, 0, 255};
	Color green = {0, 255, 0, 255};
	Color red = {255, 0, 0, 255};
	Color blue = {0, 0, 255, 255};
	return {darkGrey, cyan, yellow, purple, orange, green, red, blue};
}

void Grid::Draw() {
	for (int row = 0; row < num_rows; ++row) {
		for (int colomn = 0; colomn < num_colomns; ++colomn) {
			int cell_value = grid[row][colomn];
			DrawRectangle((GetScreenWidth() - num_colomns * cell_size) / 2 + colomn * cell_size + 1,
			              (GetScreenHeight() - num_rows * cell_size) / 2 + row * cell_size + 1, (cell_size - 1),
			              cell_size - 1, colors[cell_value]);
		}
	}
}
