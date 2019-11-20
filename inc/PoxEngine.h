#ifndef POXENGINE_H
#define POXENGINE_H

#include "SDL2/SDL.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ENGINE_VERSION "0.1.2"
#define GAME_NAME "BLOW WARS"

typedef enum e_ptype {
    Air,
    Dirt,
	Rock
} t_ptype;

typedef struct s_poxel {
	int x;
	int y;
	t_ptype type;
	SDL_Color color;
} t_poxel;

SDL_Rect pox_create_rect(int x, int y, int size_x, int size_y);

SDL_Color pox_create_color(int r, int g, int b, int a);

t_poxel pox_create_poxel(int x, int y, t_ptype type);

int pox_random_int(int min, int max);

void pox_draw_pixel(SDL_Renderer *renderer, int x, int y, SDL_Color color);
void pox_draw_rectangle(SDL_Renderer *renderer, int x, int y, int size_x, int size_y, SDL_Color color);
void pox_draw_pixel_in_grid(SDL_Renderer *renderer, int x, int y, int size_x, int size_y, SDL_Color color);


#endif
