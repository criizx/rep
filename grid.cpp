#include <iostream>

#include "grid.h"

Grid::Grid() {
	num_rows = 20;
	num_colomns = 10;
	cell_size = 30;
	initialize();
	print();
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
