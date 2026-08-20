#include <stdio.h>

#include <raylib.h>

typedef struct {
    int x, y;
} Vec2;

typedef struct {
    int x, y;
    float radius;
    Color color;
} Ball;

typedef struct {
    int start_x, start_y;
    int end_x, end_y;
} Screen;

void ball_draw(const Ball* ball)
{
    DrawCircle(ball->x, ball->y, ball->radius, ball->color);
}

void ball_move(Ball* ball, Vec2* vec, const Screen* screen)
{
    const int destiny_x = ball->x + vec->x;
    const int destiny_y = ball->y + vec->y;

    // Changes vec x and y when ball edge reaches end of screen
    if (destiny_x - ball->radius <= screen->start_x ||
        destiny_x + ball->radius >= screen->end_x) {
        vec->x *= -1;
    }
    if (destiny_y - ball->radius <= screen->start_y ||
        destiny_y + ball->radius >= screen->end_y) {
        vec->y *= -1;
    }

    // Applys vec to ball coords
    ball->x += vec->x;
    ball->y += vec->y;
}

int main(void)
{
    const int window_width = 800;
    const int window_height = 600;

    // Setup screen: For now its a full screen in the window
    const Screen screen = { .start_x = 0, .start_y = 0, .end_x = window_width, .end_y = window_height };

    InitWindow(window_width, window_height, "Bouncing Ball");
    SetTargetFPS(60);

    Ball ball = { .x = 50, .y = 50, .radius = 50.0f, .color = RED };
    Vec2 move_vec = { .x = 5, .y = 5 };

    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);

        // Update
        ball_move(&ball, &move_vec, &screen);

        // Draw
        BeginDrawing();

        ball_draw(&ball);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
