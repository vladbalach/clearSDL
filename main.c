#include "blowwars.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int game(SDL_Renderer **renderer, SDL_Event event) {
	int running = 1;

	int POXELS_X_COUNT = SCREEN_WIDTH / 16;
	int POXELS_Y_COUNT = SCREEN_HEIGHT / 16;

	t_poxel *poxel;

    t_poxel ***map = (t_poxel ***)malloc(sizeof(t_poxel **) * POXELS_X_COUNT);
    for (int x = 0; x < POXELS_X_COUNT; x++) {
        map[x] = (t_poxel **)malloc(sizeof(t_poxel *) * POXELS_Y_COUNT);

        for (int y = 0; y < POXELS_Y_COUNT; y++) {
            map[x][y] = pox_create_poxel(x, y, Dirt);
		}
	}

    while (running) {

		while(SDL_PollEvent(&event)) {

			if ((SDL_QUIT == event.type)
				|| (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE))
                running = 0;

        }

		/* GAME PROCESSES STRART */

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

		for (int y = 0; y < POXELS_Y_COUNT; y++) {
            for (int x = 0; x < POXELS_X_COUNT; x++) {
				poxel = map[x][y];
				//pox_draw_pixel(renderer, poxel->x, poxel->y, poxel->color);
        		pox_draw_pixel_in_grid(renderer, poxel->x, poxel->y, 16, 16, poxel->color);
			}
		}

		//printf("X: %i, Y: %i\n", x, y);

        SDL_RenderPresent(renderer);
        SDL_Delay(100);

		/* GAME PROCESSES END */

	}

	return 0;
}

int main(int argc, char *argv[]) {

	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;

	SDL_Event event;

	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(GAME_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);

	game(renderer, event);

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
