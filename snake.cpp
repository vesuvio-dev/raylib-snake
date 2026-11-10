#include "raylib.h"
#include <vector>

void drawSnake(std::vector<std::vector<int>> snake){
    for(int i = 0; i < snake.size(); i++){
        DrawRectangle(snake[i][0], snake[i][1], 20, 20, GREEN);
    }
}

void increasesize(std::vector<std::vector<int>>& snake){
        snake.push_back({snake[1][0], snake[1][1]});
}

void food(std::vector<std::vector<int>>& snake, int& foodX, int& foodY, int& score){
    if(foodX != 0 && foodY != 0){
         DrawRectangle(foodX, foodY, 20, 20, RED);
    }else{
        foodX = GetRandomValue(0, 20) * 20;
        foodY = GetRandomValue(0, 20) * 20;
    }
    if(snake[0][0] == foodX && snake[0][1] == foodY){
        foodX = GetRandomValue(0, 20) * 20;
        foodY = GetRandomValue(0, 20) * 20;
        score++;
        snake.push_back({snake[1][0], snake[1][1]});
    }
}
