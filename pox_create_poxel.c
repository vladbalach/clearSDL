#include "poxengine.h"

t_poxel *pox_create_poxel(int x, int y, t_ptype type) {
    t_poxel *poxel = (t_poxel *)malloc(sizeof(t_poxel));
    poxel->x = x;
	poxel->y = y;
	poxel->type = type;
	//poxel->color = pox_create_color(255, 255, 255, 255);
	//pox_random_int(0, 1);
	//printf("1");

    if (type == Air) {
        poxel->color = pox_create_color(100,
										160,
										200,
										255);
	} else if (type == Dirt) {
		poxel->color = pox_create_color(150,
										120,
										85,
										255);
	} else if (type == Rock) {
		poxel->color = pox_create_color(150,
										150,
										150,
										255);
	}

	return poxel;
}
