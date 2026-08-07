#include <stdio.h>

#include <raylib.h>

#include "app.h"
#include "ball.h"
#include "paddle.h"

int main()
{
    const Window win = { 1200, 800 };

    InitWindow(win.width, win.height, "CPong");
    SetTargetFPS(60);

    Ball ball = ball_new(100.0, 300.0, 20.0, WHITE);
    ball.x_speed = 7;
    ball.y_speed = 7;

    Paddle lpad = paddle_new(100.0, win.height / 2 - 60, 120, 20, WHITE);

    Paddle rpad = paddle_new(win.width - 100.0 - 20, win.height / 2 - 60, 120, 20, WHITE);

    while (!WindowShouldClose()) {
        if (IsKeyDown(KEY_LEFT_CONTROL) && IsKeyPressed(KEY_Q)) break; // C-q

        app_check_keys();

        if (IsKeyDown(KEY_D)) lpad = paddle_update(lpad, win, -7);
        if (IsKeyDown(KEY_F)) lpad = paddle_update(lpad, win, 7);

        if (IsKeyDown(KEY_K)) rpad = paddle_update(rpad, win, -7);
        if (IsKeyDown(KEY_J)) rpad = paddle_update(rpad, win, 7);

        ball = ball_update(ball, win, paddle_get_rec(lpad), paddle_get_rec(rpad));

        BeginDrawing();
        ClearBackground(BLACK);
            app_draw_mid_line(win);
            ball_draw(ball);
            paddle_draw(lpad);
            paddle_draw(rpad);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
