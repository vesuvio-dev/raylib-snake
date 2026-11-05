#pragma once
#include <vector>

void drawSnake(std::vector<std::vector<int>> snake);
void food(std::vector<std::vector<int>>& snake, int& foodX, int& foodY, int& score);
void increasesize(std::vector<std::vector<int>>& snake, int& score);