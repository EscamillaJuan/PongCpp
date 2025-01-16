#include <iostream>
#include "raylib.h"

int main(int argc, char const *argv[])
{
    std::cout << "Starting the game" << std::endl;
    const int screen_width = 800,
            screen_height = 600;

    InitWindow(screen_width, screen_height, "Pong Game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        DrawCircle(screen_width/2, screen_height/2, 20, WHITE);
        DrawRectangle(10, (screen_height - 120)/2, 25, 120, WHITE);
        DrawRectangle(screen_width - 35, (screen_height - 120)/2, 25, 120, WHITE);
        DrawLine(screen_width / 2, 0, screen_width/2, screen_height, WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
