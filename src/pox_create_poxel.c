#include "../inc/PoxEngine.h"

t_poxel pox_create_poxel(int x, int y, t_ptype type) {
    t_poxel poxel;

    poxel.x = x;
	poxel.y = y;
	poxel.type = type;

	if (poxel.type == Air) {
		poxel.color = pox_create_color(100, 175, 200, 255);
	} else if (poxel.type == Dirt) {
		poxel.color = pox_create_color(125, 75, 0, 255);
	} else if (poxel.type == Rock) {
		poxel.color = pox_create_color(100, 100, 100, 255);
	}

	return poxel;
}
