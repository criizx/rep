#include <Tetromino.h>

Tetromino::Tetromino(TetrominoType type){
    for(int i = 0; i < 4; ++i){
        blocks[i].setSize(sf::Vector2f(30.0f, 30.0f));
    }
}
void Tetromino::setShape(TetrominoType type){
    switch(type)
    case TetrominoType::I:
        blocks[0].setPosition(sf::Vector2f(100.0f, 0.0f));
        blocks[1].setPosition(sf::Vector2f(100.0f, 30.0f));
        blocks[2].setPosition(sf::Vector2f(100.0f, 60.0f));
        blocks[3].setPosition(sf::Vector2f(100.0f, 90.0f));
}