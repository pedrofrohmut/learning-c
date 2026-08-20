#include <stdio.h>

#include <raylib.h>

int main(void)
{
    InitWindow(800, 600, "Bouncing Ball");

    while (!WindowShouldClose()) {
        ClearBackground(GRAY);
    BeginDrawing();
    {
        DrawText("Hello from Bouncing Ball!", 20, 20, 22, WHITE);
    }
    EndDrawing();
    }

    CloseWindow();

    return 0;
}
