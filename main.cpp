#include "raylib.h"
#include "movement.h"
#include "collisions.h"
#include "snake.h"
#include <vector>

using namespace std;

int main(){
    int score = 0;
    int foodX = GetRandomValue(0, 20) * 20;
    int foodY = GetRandomValue(0, 20) * 20;
    string menu = "Press W - A - S - D to move the snake.";
    string end = "Game Over!";
    vector<vector<int>> snake {
        {380, 280},
        {360, 280},
    };
    int moveX = 0;
    int moveY = 0;
    bool gameOver = false;

    InitWindow(800, 600, "Snake");
    SetTargetFPS(15);

while(!WindowShouldClose()){

        BeginDrawing();

            ClearBackground(BLACK);
            DrawRectangleLinesEx(Rectangle{0, 0, 800, 600}, 20, WHITE);
            DrawText(menu.c_str(), 30, 30, 20, WHITE);
            DrawText(TextFormat("%i", score), 50, 50, 30, WHITE);
            drawSnake(snake);

            checkBorderCollision(snake, gameOver);
            if(!gameOver){
                direction(moveX, moveY, menu);
                movement(snake, moveX, moveY);
                food(snake, foodX, foodY, score);
            } else {
                DrawText(end.c_str(), 300, 280, 40, WHITE);
            }
            EndDrawing();
    }
    CloseWindow();
}