#include "app.h"
#include <raylib.h>

void app_draw_mid_line(Window win)
{
    DrawLine(win.width/2, 0, win.width/2, win.height, WHITE);
}
