#include "Game.h"

Game::Game(sf::RenderWindow& win) : window(win), board(), currentTetromino(){
    
}

void Game::update(){

}

void Game::render(){
    window.clear();
    
    board.render(window);
    currentTetromino.render(window);

    window.display();
}