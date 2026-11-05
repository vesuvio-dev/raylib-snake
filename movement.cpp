#include   "movement.h"
#include "raylib.h"
#include <string>
#include <vector>



void movement(std::vector<std::vector<int>>& snake, int& moveX, int& moveY){
    snake[0][0] += moveX;
    snake[0][1] += moveY;
    for(int i = snake.size() - 1; i > 0; i--){
        snake[i][0] = snake[i - 1][0];
        snake[i][1] = snake[i - 1][1];
    }
}
void direction(int& moveX, int& moveY, std::string& menu){
    if(IsKeyPressed(KEY_W)){
        menu = "";
        moveY = -20;
        moveX = 0;
    }
    else if(IsKeyPressed(KEY_A)){
        menu = "";
        moveY = 0;
        moveX = -20;
    }
    else if(IsKeyPressed(KEY_S)){
        menu = "";
        moveY = 20;
        moveX = 0;
    }
    else if(IsKeyPressed(KEY_D)){
        menu = "";
        moveY = 0;
        moveX = 20;
        }
    }