#include "raylib.h"

int main(void)
{
    InitWindow(400, 600, "Frenetic super calculator");
    SetTargetFPS(30);

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            DrawText("Buyaaaaa", GetScreenWidth() / 2 - 50, GetScreenHeight() / 2 - 10, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
