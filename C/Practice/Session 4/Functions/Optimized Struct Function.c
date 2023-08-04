#include <stdio.h>
#include <stdlib.h>

typedef struct Points {
	double x;
	double y;
} Points;

void MidPoint(const Points* a, const Points* b, Points* out) {
	out->x = (*a.x + *b.x) / 2;
	out->y = (a->y + b->y) / 2;
}

int main() {
	Points PA = {
		.x = 5,
		.y = 10
	};
	Points PB = {
		.x = 6,
		.y = 9
	};
	Points coords;
	MidPoint(&PA, &PB, &coords);
	printf("%f %f\n", coords.x, coords.y);
}
