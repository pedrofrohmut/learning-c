#include "ball.h"

#include <raylib.h>

Ball ball_new(float x, float y, float radius, Color color)
{
    return (Ball) { .x = x, .y = y, .radius = radius, .color = color };
}

void ball_draw(Ball ball)
{
    Vector2 center = { ball.x, ball.y };
    DrawCircleV(center, ball.radius, ball.color);
}

// bool CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
Ball ball_update(Ball ball, Window win, Rectangle lpad_rec, Rectangle rpad_rec)
{
    bool wall_collision_x = ball.x + ball.radius >= win.width || ball.x - ball.radius <= 0;
    if (wall_collision_x) {
	ball.x_speed *= -1;
    }

    bool wall_collision_y = ball.y + ball.radius >= win.height || ball.y - ball.radius <= 0;
    if (wall_collision_y) {
	ball.y_speed *= -1;
    }

    bool lpad_collision = CheckCollisionCircleRec(ball_get_center(ball), ball.radius, lpad_rec);
    if (lpad_collision) {
        ball.color = RED;
        ball.x_speed *= -1;
    }

    bool rpad_collision = CheckCollisionCircleRec(ball_get_center(ball), ball.radius, rpad_rec);
    if (rpad_collision) {
        ball.color = BLUE;
        ball.x_speed *= -1;
    }

    // Move the ball
    ball.x += ball.x_speed;
    ball.y += ball.y_speed;

    return ball;
}

Vector2 ball_get_center(Ball ball)
{
    return (Vector2) { .x = ball.x, .y = ball.y };
}
