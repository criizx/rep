#include <vector>

#include "colors.h"

const Color darkGrey = {64, 64, 64, 255};  //цвета клеток
const Color cyan = {0, 255, 255, 255};     //цвета самих фигур
const Color yellow = {255, 255, 0, 255};   //цвета самих фигур
const Color purple = {128, 0, 128, 255};   //цвета самих фигур
const Color orange = {255, 127, 0, 255};   //цвета самих фигур
const Color green = {0, 255, 0, 255};      //цвета самих фигур
const Color red = {255, 0, 0, 255};        //цвета самих фигур
const Color blue = {0, 0, 255, 255};       //цвета самих фигур

std::vector<Color> get_cell_colors() { return {darkGrey, cyan, yellow, purple, orange, green, red, blue}; }
