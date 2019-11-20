#include "../inc/PoxEngine.h"

SDL_Rect pox_create_rect(int x, int y, int size_x, int size_y) {
    SDL_Rect rect;

    rect.x = x;
	rect.y = y;
	rect.w = size_x;
	rect.h = size_y;

	return rect;
}
