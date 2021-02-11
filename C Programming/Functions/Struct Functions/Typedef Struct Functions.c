#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    double x, y;
} Point;

Point MidPoint(Point a, Point b) {
    Point out;
    out.x = (a.x + b.x) / 2;
    out.y = (a.y + b.y) / 2;
    return out;
}

int main() {
    Point p1 = {
        .x = 4,
        .y = 6
    };
    Point p2 = {
        .x = 2,
        .y = 4
    };
    Point middle;
    middle = MidPoint(p1, p2);
    printf("%lf, %lf\n", middle.x, middle.y);
}