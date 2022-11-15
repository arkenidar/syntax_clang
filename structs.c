#include <stdio.h>

struct position{
	int x; int y; };

int main(){

	// initialize a struct
	struct position point = { .x = 11, .y = 22};

	printf("point:(%d,%d)\n", point.x, point.y);

	return 0;
}
