#pragma once
#include <raylib.h>

#include <map>
#include <vector>

#include "position.h"

class Block {
   public:
	int id;
	Block();
	std::map<int, std::vector<Position>> cells;

   private:
	int cell_size;
	int rotation_state;
	std::vector<Color> colors;
};
