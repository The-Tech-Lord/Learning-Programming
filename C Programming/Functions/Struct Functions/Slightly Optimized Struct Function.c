#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    double x, y;
} Point;

Point* MidPoint(Point* a, Point* b) {
    Point* out = malloc(sizeof(Point));
    out->x = (a->x + b->x) / 2;
    out->y = (a->y + b->y) / 2;
    return out;
}

int main() {
    Point p1 = {
        .x = 5,
        .y = 2
    };
    Point p2 = {
        .x = 2,
        .y = 3
    };
    Point* middle = MidPoint(&p1, &p2);
    printf("%lf, %lf\n", middle->x, middle->y);
}