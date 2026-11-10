#include "raylib.h"
#include "collisions.h"
#include <vector>

void checkBorderCollision(std::vector<std::vector <int>> snake, bool& gameOver)
{
    if(snake[0][0] == 0 || snake[0][0]== 780 || snake[0][1] == 0 || snake[0][1] == 580){
        DrawRectangle(snake[0][0], snake[0][1], 20, 20, WHITE);
        gameOver = true;
    }
}

void checkSnakeCollision(std::vector<std::vector<int>> snake, bool& gameOver){
    for(int i = snake.size() - 1; i > 0; i--){
        if(snake[0][0] == snake[i][0] && snake[0][1] == snake[i][1]){
            gameOver = true;
        }
    }
}
