#include <raylib.h>

#include <iostream>

#include "grid.h"

int main() {
	Color darkBlue = {44, 44, 127, 255};
	std::cout << "starting" << std::endl;
	const int screenHeight = 1030, screenWidth = 1920;
	InitWindow(screenWidth, screenHeight, "tetris");
	Grid grid;
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.initialize();
		EndDrawing();
	}
	CloseWindow();
}
