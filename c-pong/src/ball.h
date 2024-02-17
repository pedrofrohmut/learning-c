#ifndef BALL_H
#define BALL_H

#include <raylib.h>

#include "app.h"

typedef struct {
    float x;
    float y;
    float radius;
    Color color;

    float x_speed;
    float y_speed;
} Ball;

Ball ball_new(float x, float y, float radius, Color color);
void ball_draw(Ball ball);
Ball ball_update(Ball ball, Window win);

#endif
