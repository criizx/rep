#pragma once

class Grid {
   private:
	int num_rows;
	int num_colomns;
	int cell_size;

   public:
	Grid();
	void initialize();
	void print();
	int grid[20][10];
};
