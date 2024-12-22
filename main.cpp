#include <raylib.h>

#include <iostream>

int main() {
  std::cout << "starting" << std::endl;
  const int screenHeight = 1030, screenWidth = 1920;
  InitWindow(screenWidth, screenHeight, "tetris");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
  }
  CloseWindow();
}
