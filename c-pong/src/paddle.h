#ifndef PADDLE_H
#define PADDLE_H

#include "app.h"

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
Paddle paddle_update(Paddle p, Window win, float y_speed);

#endif
