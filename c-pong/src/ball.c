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

Ball ball_update(Ball ball, Window win)
{
    bool wall_collision_x = ball.x + ball.radius >= win.width || ball.x - ball.radius <= 0;
    if (wall_collision_x) {
	ball.x_speed *= -1;
    }

    bool wall_collision_y = ball.y + ball.radius >= win.height || ball.y - ball.radius <= 0;
    if (wall_collision_y) {
	ball.y_speed *= -1;
    }

    // Move the ball
    ball.x += ball.x_speed;
    ball.y += ball.y_speed;

    return ball;
}
