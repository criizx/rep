#include <raylib.h>

#include <iostream>

#include "game.h"

BlockL block = BlockL();
int main() {
	Color darkBlue = {44, 44, 127, 255};
	const int screenHeight = 1030, screenWidth = 1920;
	InitWindow(screenWidth, screenHeight, "tetris");
	SetTargetFPS(60);

	Game game = Game();
	while (!WindowShouldClose()) {
		game.handle_input();
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}
	CloseWindow();
}
