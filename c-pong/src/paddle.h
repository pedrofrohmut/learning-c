#ifndef PADDLE_H
#define PADDLE_H

#include <raylib.h>

typedef struct {
    float x;
    float y;
    float height;
    float width;
    Color color;
} Paddle;

Paddle paddle_new(float x, float y, float height, float width, Color color);
void paddle_draw(Paddle p);

#endif
