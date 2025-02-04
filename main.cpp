#include <raylib.h>

#include <iostream>

#include "game.h"

double last_update_time = 0;

bool EventTriggered(double interval) {
	double current_time = GetTime();
	if (current_time - last_update_time >= interval) {
		last_update_time = current_time;
		return true;
	}
	return false;
}

BlockL block = BlockL();
int main() {
	Color darkBlue = {44, 44, 127, 255};
	const int screenHeight = 1030, screenWidth = 1920;
	InitWindow(screenWidth, screenHeight, "tetris");
	SetTargetFPS(60);

	Game game = Game();
	while (!WindowShouldClose()) {
		game.handle_input();
		if (EventTriggered(0.5)) {
			game.move_block_down();
		}
		BeginDrawing();
		ClearBackground(darkBlue);
		game.Draw();
		EndDrawing();
	}
	CloseWindow();
}
