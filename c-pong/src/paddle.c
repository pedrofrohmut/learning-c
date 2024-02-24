#include "paddle.h"

Paddle paddle_new(float x, float y, float height, float width, Color color)
{
    return (Paddle) { .x = x, .y = y, .height = height, .width = width, color = color };
}

void paddle_draw(Paddle p)
{
    DrawRectangle(p.x, p.y, p.width, p.height, p.color);
}

Paddle paddle_update(Paddle p, Window win, float y_speed)
{
    bool top_collision = p.y <= 0;
    bool bottom_collision = (p.y + p.height) >= win.height;
    bool can_move = !(top_collision && y_speed < 0) && !(bottom_collision && y_speed > 0);

    if (can_move) {
        return paddle_new(p.x, p.y + y_speed, p.height, p.width, p.color);
    } else {
        return paddle_new(p.x, p.y, p.height, p.width, p.color);
    }
}

Rectangle paddle_get_rec(Paddle p)
{
    return (Rectangle) { .x = p.x, .y = p.y, .width = p.width, .height = p.height };
}
