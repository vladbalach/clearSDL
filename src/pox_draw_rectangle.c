#include "../inc/PoxEngine.h"

void pox_draw_rectangle(SDL_Renderer *renderer, int x, int y, int size_x, int size_y, SDL_Color color) {
	SDL_Rect rect = pox_create_rect(x, y, size_x, size_y);
	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
	SDL_RenderFillRect(renderer, &rect);
}
