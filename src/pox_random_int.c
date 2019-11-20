#include "../inc/PoxEngine.h"

int pox_random_int(int min, int max) {
	srand(time(0) + (rand() % (10000 - (-10000) + 1)) + (-10000));
	return (rand() % (max - min + 1)) + min;
}
