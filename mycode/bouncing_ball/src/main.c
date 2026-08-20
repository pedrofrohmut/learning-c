#include <stdio.h>

#include <raylib.h>

typedef struct {
    int x, y;
} Vec2;

typedef struct {
    int x, y;
    float radius;
    Color color;
    Vec2 velocity;
} Ball;

typedef struct {
    int start_x, start_y;
    int end_x, end_y;
} Screen;

void ball_draw(const Ball* ball)
{
    DrawCircle(ball->x, ball->y, ball->radius, ball->color);
}

void ball_move(Ball* ball, const Screen* screen)
{
    const int dest_x = ball->x + ball->velocity.x;
    const int dest_y = ball->y + ball->velocity.y;

    // Changes vec x and y when ball edge reaches end of screen
    if (dest_x - ball->radius <= screen->start_x ||
        dest_x + ball->radius >= screen->end_x) {
        ball->velocity.x *= -1;
    }
    if (dest_y - ball->radius <= screen->start_y ||
        dest_y + ball->radius >= screen->end_y) {
        ball->velocity.y *= -1;
    }

    // Applies velocity to ball coords
    ball->x += ball->velocity.x;
    ball->y += ball->velocity.y;
}

int main(void)
{
    const int window_width = 800;
    const int window_height = 600;

    // Setup screen: For now it is a full screen in the window
    const Screen screen = { .start_x = 0, .start_y = 0, .end_x = window_width, .end_y = window_height };

    InitWindow(window_width, window_height, "Bouncing Ball");
    SetTargetFPS(60);

    Vec2 ball_velocity = { .x = 3, .y = 3 };
    Ball ball = { .x = 50, .y = 50, .radius = 50.0f, .color = RED, .velocity = ball_velocity };

    while (!WindowShouldClose())
    {
        // Update
        ball_move(&ball, &screen);

        // Draw
        BeginDrawing();
        {
            ClearBackground(BLACK);

            ball_draw(&ball);
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
