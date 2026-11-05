#include "raylib.h"
#include "collisions.h"
#include <vector>

void checkBorderCollision(std::vector<std::vector <int>> snake, bool& gameOver)
{
    if(snake[0][0] == 0 || snake[0][0]== 780 || snake[0][1] == 0 || snake[0][1] == 580){
        gameOver = true;
    }
}