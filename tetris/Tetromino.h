#pragma once
#include <SFML/Graphics.hpp>
#include <cstdlib>

enum class TetrominoType { I, J, L, O, S, T, Z};
enum class TetrominoColor { Blue, Pink, Yellow, Orange, Red, Green, Purple};

class Tetromino{
public:
    Tetromino(TetrominoType type);
    void render(sf::RenderWindow& window);
private:
    sf::RectangleShape blocks[4];
    TetrominoColor color;
    void setShape(TetrominoType type);
    void setColor(TetrominoColor color);
};