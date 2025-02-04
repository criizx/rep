#include <raylib.h>

#include <cstdlib>
#include <ctime>
#include <exception>
#include <random>

#include "block.h"
#include "game.h"
#include "position.h"

Game::Game() {
	srand(time(0));
	grid = Grid();
	blocks = get_all_blocks();
	current_block = get_random_block();
	next_block = get_random_block();
}

Block Game::get_random_block() {
	if (blocks.empty()) {
		blocks = get_all_blocks();
	}
	int random_index = rand() % blocks.size();
	Block block = blocks[random_index];
	blocks.erase(blocks.begin() + random_index);
	block.Set_grid_offset(grid.GetStartX(), grid.GetStartY());
	return block;
}

std::vector<Block> Game::get_all_blocks() {
	return {BlockI(), BlockJ(), BlockL(), BlockO(), BlockS(), BlockT(), BlockZ()};
}

void Game::Draw() {
	grid.Draw();
	DrawRectangle(grid.GetStartX() + current_block.Get_cell_size() * 15,
	              grid.GetStartY() + current_block.Get_cell_size() * 4, current_block.Get_cell_size() * 5,
	              current_block.Get_cell_size() * 5, GRAY);
	draw_next_block();
	current_block.Draw();
}

void Game::handle_input() {
	int key_pressed = GetKeyPressed();
	switch (key_pressed) {
		case KEY_LEFT:
			move_block_left();
			break;
		case KEY_RIGHT:
			move_block_right();
			break;
		case KEY_DOWN:
			move_block_down();
			break;
		case KEY_UP:
			rotate_block();
			break;
	}
}

void Game::move_block_left() {
	current_block.Move(0, -1);
	if (is_block_outside() || !block_fits()) {
		current_block.Move(0, 1);
	}
}
void Game::move_block_right() {
	current_block.Move(0, 1);
	if (is_block_outside() || !block_fits()) {
		current_block.Move(0, -1);
	}
}
void Game::move_block_down() {
	current_block.Move(1, 0);
	if (is_block_outside() || !block_fits()) {
		current_block.Move(-1, 0);
		lock_block();
	}
}

void Game::rotate_block() {
	current_block.rotate();
	if (is_block_outside() || !block_fits()) {
		current_block.undo_rotation();
	}
}

bool Game::is_block_outside() {
	std::vector<Position> tiles = current_block.get_cell_positions();
	for (Position item : tiles) {
		if (grid.is_cell_outside(item.row, item.column)) {
			return true;
		}
	}
	return false;
}

void Game::lock_block() {
	std::vector<Position> tiles = current_block.get_cell_positions();
	for (Position item : tiles) {
		grid.grid[item.row][item.column] = current_block.id;
	}
	current_block = next_block;
	next_block = get_random_block();
}

bool Game::block_fits() {
	std::vector<Position> tiles = current_block.get_cell_positions();
	for (Position item : tiles) {
		if (!grid.is_cell_empty(item.row, item.column)) {
			return false;
		}
	}
	return true;
}

void Game::draw_next_block() {
	Block block_for_hint = next_block;
	block_for_hint.Move(6, 13);
	block_for_hint.Draw();
}
