#pragma once
#include <raylib.h>

#include <vector>

// L-block J-block I-block O-block S-block T-block Z-block

class Grid {
   private:
	int num_rows;
	int num_colomns;
	int cell_size;
	std::vector<Color> colors;

   public:
	Grid();
	void initialize();
	void print();
	int grid[20][10];
	void Draw();
	std::vector<Color> get_cell_colors();
};
