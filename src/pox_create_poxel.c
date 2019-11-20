#include "../inc/PoxEngine.h"

t_poxel pox_create_poxel(int x, int y, t_ptype type) {
    t_poxel poxel;

    poxel.x = x;
	poxel.y = y;
	poxel.type = type;

	if (poxel.type == Air) {
		poxel.color = pox_create_color(135, 200, 235, 255);
	} else if (poxel.type == Dirt) {
		poxel.color = pox_create_color(155, 120, 80, 255);
	} else if (poxel.type == Rock) {
		poxel.color = pox_create_color(100, 100, 100, 255);
	}

	return poxel;
}
