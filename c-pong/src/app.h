#ifndef APP_H
#define APP_H

typedef struct {
    float width;
    float height;
} Window;

void app_draw_mid_line(Window win);
void app_check_keys();

#endif
