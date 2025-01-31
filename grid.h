#pragma once
#include <raylib.h>

#include <vector>

class Grid {
   private:
	int num_rows;
	int num_colomns;
	int cell_size;
	std::vector<Color> colors;
	int start_x, start_y;

   public:
	Grid();
	void initialize();
	void print();
	int grid[20][10];
	void Draw();
	bool is_cell_outside(int row, int column);
	int GetStartX() const { return start_x; }
	int GetStartY() const { return start_y; }
};
