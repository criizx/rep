#include "block.h"
#include "position.h"

// L-block J-block I-block O-block S-block T-block Z-block

class BlockL : public Block {
   public:
	BlockL() {
		id = 1;
		cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
		cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
		cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
		cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
	}
};
