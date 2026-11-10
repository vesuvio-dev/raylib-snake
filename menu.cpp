#include "raylib.h"
#include "menu.h"

void RestartGame(std::vector<std::vector<int>>& snake, int& moveX, int& moveY, int& score, int& foodX, int& foodY){
    snake = {
        {380, 280}, 
        {360, 280}, 
        {360, 280}, 
    };
    moveX = 0;
    moveY = 0;
    score = 0;
    foodX = GetRandomValue(2, 37) * 20;
    foodY = GetRandomValue(2, 27) * 20;
}

void GameOverMenu(bool& gameOver, std::vector<std::vector<int>>& snake, int& moveX, int& moveY, int& score, int& foodX, int& foodY){
    DrawText("Press [ENTER] to restart",  260, 320, 20, WHITE);
    if(IsKeyPressed(KEY_ENTER)){
        gameOver = false;
        RestartGame(snake, moveX, moveY, score, foodX, foodY);
    }
}
