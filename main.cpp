#include "raylib.h"
#include "movement.h"
#include "collisions.h"
#include "snake.h"
#include "menu.h"
#include <vector>

using namespace std;

int main(){
    int score = 0;
    int foodX = GetRandomValue(0, 20) * 20;
    int foodY = GetRandomValue(0, 20) * 20;
    string menu = "Press W - A - S - D to move the snake.";
    string end = "Game Over!";
    vector<vector<int>> snake {
        {380, 280},  //Head
        {360, 280}, //Body
        {360, 280}, //Tail
    };
    int moveX = 0;
    int moveY = 0;
    bool gameOver = false;

    InitWindow(800, 600, "Snake");
    SetTargetFPS(15);

while(!WindowShouldClose()){

        BeginDrawing();

            //Main Background
            ClearBackground(BLACK); 

            //Border
            DrawRectangleLinesEx(Rectangle{0, 0, 800, 600}, 20, WHITE);     

            //Game Started Functions
            if(!gameOver){
                DrawText(menu.c_str(), 30, 30, 20, WHITE);
                drawSnake(snake);
                DrawText(TextFormat("%i", score), 50, 50, 30, WHITE);
                checkBorderCollision(snake, gameOver);
                checkSnakeCollision(snake, gameOver);
                direction(moveX, moveY, menu);
                if(moveX != 0 || moveY != 0){
                movement(snake, moveX, moveY);
                }
                food(snake, foodX, foodY, score);
            }else{
            DrawText(end.c_str(), 235, 265, 60, WHITE);
            GameOverMenu(gameOver, snake, moveX, moveY, score);
            }

            EndDrawing();
    }
    CloseWindow();
}