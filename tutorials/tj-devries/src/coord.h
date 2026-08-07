#pragma once

typedef struct {
    int x;
    int y;
    int z;
} Coordinate;

Coordinate new_coord(int x, int y, int z);
Coordinate scale_coord(Coordinate c, int factor);
