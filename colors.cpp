#include <vector>

#include "colors.h"

const Color darkGrey = {127, 127, 127, 255};
const Color cyan = {0, 255, 255, 255};
const Color yellow = {255, 255, 0, 255};
const Color purple = {128, 0, 128, 255};
const Color orange = {255, 127, 0, 255};
const Color green = {0, 255, 0, 255};
const Color red = {255, 0, 0, 255};
const Color blue = {0, 0, 255, 255};

std::vector<Color> get_cell_colors() { return {darkGrey, cyan, yellow, purple, orange, green, red, blue}; }
