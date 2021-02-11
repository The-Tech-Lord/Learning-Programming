#include <stdio.h>
#include <stdlib.h>

typedef struct coords {
    int x;
    int y;
} coords;

void MidPoint(const coords* a, const coords* b, coords* out) {
    out->x = (a->x + b->x) / 2;
    out->y = (a->y + b->y) / 2;
}

int main() {
    coords m1 = {
        .x = 4,
        .y = 6
    };
    coords m2 = {
        .x = 2,
        .y = 4
    };
    coords middle;
    MidPoint(&m1, &m2, &middle);
    printf("%d, %d\n", middle.x, middle.y);
}