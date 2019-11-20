#include "../inc/PoxEngine.h"

void pox_draw_pixel_in_grid(SDL_Renderer *renderer, int x, int y, int size_x, int size_y, SDL_Color color) {
    pox_draw_rectangle(renderer, x * size_x, y * size_y, size_x, size_y, color);
}
