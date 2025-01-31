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
		Move(0, 3);
	}
};

class BlockJ : public Block {
   public:
	BlockJ() {
		id = 2;
		cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
		cells[1] = {Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1)};
		cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
		cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
		Move(0, 3);
	}
};

class BlockI : public Block {
   public:
	BlockI() {
		id = 3;
		cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 2)};
		cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
		cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
		cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1)};
		Move(-1, 3);
	}
};

class BlockO : public Block {
   public:
	BlockO() {
		id = 4;
		cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
		cells[1] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
		cells[2] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
		cells[3] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
		Move(0, 4);
	}
};

class BlockS : public Block {
   public:
	BlockS() {
		id = 5;
		cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
		cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 2)};
		cells[2] = {Position(1, 1), Position(1, 2), Position(2, 0), Position(2, 1)};
		cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
		Move(0, 3);
	}
};

class BlockT : public Block {
   public:
	BlockT() {
		id = 6;
		cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
		cells[1] = {Position(0, 1), Position(1, 1), Position(1, 2), Position(2, 1)};
		cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
		cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
		Move(0, 3);
	}
};

class BlockZ : public Block {
   public:
	BlockZ() {
		id = 7;
		cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
		cells[1] = {Position(0, 2), Position(1, 1), Position(1, 2), Position(2, 1)};
		cells[2] = {Position(1, 0), Position(1, 1), Position(2, 1), Position(2, 2)};
		cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
		Move(0, 3);
	}
};
