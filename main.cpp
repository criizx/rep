#include <raylib.h>

#include <iostream>

#include "blocks.cpp"
#include "grid.h"

BlockL block = BlockL();
int main() {
	Color darkBlue = {44, 44, 127, 255};
	std::cout << "starting" << std::endl;
	const int screenHeight = 1030, screenWidth = 1920;
	InitWindow(screenWidth, screenHeight, "tetris");

	Grid grid = Grid();
	block.SetGridOffset(grid.GetStartX(), grid.GetStartY());

	grid.print();
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.Draw();
		block.Draw();
		EndDrawing();
	}
	CloseWindow();
}
