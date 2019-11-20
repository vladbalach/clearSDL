#include "poxengine.h"

void pox_draw_pixel(SDL_Renderer *renderer, int x, int y, SDL_Color *color) {
	SDL_SetRenderDrawColor(renderer, color->r, color->g, color->b, color->a);
	SDL_RenderDrawPoint(renderer, x, y);
    pox_delete_color(&color);
}
