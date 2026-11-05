#include "raylib.h"
#include <vector>

void drawSnake(std::vector<std::vector<int>> snake){
    for(int i = 0; i < snake.size(); i++){
        DrawRectangle(snake[i][0], snake[i][1], 20, 20, GREEN);
    }
}