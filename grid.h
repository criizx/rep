#pragma once
#include <raylib.h>

#include <vector>

class Grid {
   private:
	int num_rows;
	bool is_row_full(int row);
	int num_colomns;
	int cell_size;
	std::vector<Color> colors;
	int start_x, start_y;
	void clear_row(int row);
	void move_row_down(int row, int num_rows);

   public:
	Grid();
	int clear_full_rows();
	void initialize();
	void print();
	int grid[20][10];
	void Draw();
	bool is_cell_outside(int row, int column);
	int GetStartX() const { return start_x; }
	int GetStartY() const { return start_y; }
	bool is_cell_empty(int row, int column);
};
