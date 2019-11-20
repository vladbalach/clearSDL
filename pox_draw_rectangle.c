#include "poxengine.h"

void pox_draw_rectangle(SDL_Renderer *renderer, int x, int y, int size_x, int size_y, SDL_Color *color) {
	/*for (int y1 = y; y1 < size_y + y; y1++) {
		for (int x1 = x; x1 < size_x + x; x1++) {
            pox_draw_pixel(renderer, x1, y1, color);
		}
	}*/
	SDL_Rect rect = pox_create_rect(x, y, size_x, size_y);
	SDL_SetRenderDrawColor(renderer, color->r, color->g, color->b, color->a);
	SDL_RenderFillRect(renderer, &rect);
	pox_delete_color(&color);
}
