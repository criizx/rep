#include <SFML/Graphics.hpp>
#include "Game.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 600), "Tetris");

    Game game(window);

    while (window.isOpen()) {
        game.handleInput();
        game.update();
        game.render();
    }

    return 0;
}