#include "./coord.h"

Coordinate new_coord(int x, int y, int z)
{
    Coordinate coord = {
        .x = x,
        .y = y,
        .z = z
    };
    return coord;
}

Coordinate scale_coord(Coordinate c, int factor)
{
    Coordinate scaled = {
        .x = c.x * factor,
        .y = c.y * factor,
        .z = c.z * factor,
    };
    return scaled;
}
