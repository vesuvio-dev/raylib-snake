#include "raylib.h"
#include <vector>

void drawSnake(std::vector<std::vector<int>> snake){
    for(int i = 0; i < snake.size(); i++){
        DrawRectangle(snake[i][0], snake[i][1], 20, 20, GREEN);
    }
}

void food(std::vector<std::vector<int>>& snake, int& foodX, int& foodY, int& score){

    //Inside-Snake Spawning Check
    for(int i = snake.size() - 1; i > 0; i--){
    if(foodX != 0 && foodY != 0){
        if(foodX == snake[i][0] && foodY == snake[i][1])
        {
            foodX = GetRandomValue(2, 37) * 20;
            foodY = GetRandomValue(2, 27) * 20;
        }

            //Border-Spawning Check
            if(foodX <  40  || foodX > 760 || foodY < 40 || foodY > 560){
                foodX = GetRandomValue(2, 37) * 20;
                foodY = GetRandomValue(2, 27) * 20;
        }
    }
}


    //Food Collecting
    DrawRectangle(foodX, foodY, 20, 20, RED);
    if(snake[0][0] == foodX && snake[0][1] == foodY){
        foodX = GetRandomValue(2, 37) * 20;
        foodY = GetRandomValue(2, 27) * 20;
        score++;
        snake.push_back({snake[1][0], snake[1][1]});
        }
}
