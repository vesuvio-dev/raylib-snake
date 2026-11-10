#pragma once
#include <vector>

void GameOverMenu(bool& gameOver, std::vector<std::vector<int>>& snake, int& moveX, int& moveY, int& score);
void RestartGame(std::vector<std::vector<int>>& snake, int& moveX, int& moveY, int& score);