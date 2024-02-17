#include "paddle.h"

Paddle paddle_new(float x, float y, float height, float width, Color color)
{
    return (Paddle) { .x = x, .y = y, .height = height, .width = width, color = color };
}

void paddle_draw(Paddle p)
{
    DrawRectangle(p.x, p.y, p.width, p.height, p.color);
}
