#include "poxengine.h"

void pox_delete_color(SDL_Color **color) {
	free(color);
}
