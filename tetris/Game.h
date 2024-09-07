#pragma once

#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Tetromino.h"

class Game{
public:
    Game(sf::RenderWindow& window);
    void handleInput();
    void update();
    void render();

private:
    sf::RenderWindow& window;
    Board board;
    Tetromino currentTetromino;
};