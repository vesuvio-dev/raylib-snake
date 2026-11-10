#include "raylib.h"
#include <vector>

void drawSnake(std::vector<std::vector<int>> snake){
    for(int i = 0; i < snake.size(); i++){
        DrawRectangle(snake[i][0], snake[i][1], 20, 20, GREEN);
    }
}

void food(std::vector<std::vector<int>>& snake, int& foodX, int& foodY, int& score){
    for(int i = snake.size() - 1; i > 0; i--){
    if(foodX != 0 && foodY != 0){
        if(foodX == snake[i][0] && foodY == snake[i][1]){
            foodX = GetRandomValue(0, 20) * 20;
            foodY = GetRandomValue(0, 20) * 20;
        }
    }
}
    DrawRectangle(foodX, foodY, 20, 20, RED);
    if(snake[0][0] == foodX && snake[0][1] == foodY){
        foodX = GetRandomValue(0, 20) * 20;
        foodY = GetRandomValue(0, 20) * 20;
        score++;
        snake.push_back({snake[1][0], snake[1][1]});
        }
}
