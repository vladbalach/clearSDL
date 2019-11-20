#include "poxengine.h"

SDL_Color *pox_create_color(int r, int g, int b, int a) {
    SDL_Color *color;

	color->r = r;
	color->g = g;
	color->b = b;
	color->a = a;

	return color;
}
