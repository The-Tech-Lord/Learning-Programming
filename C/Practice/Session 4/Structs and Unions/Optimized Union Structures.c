#include <stdio.h>
#include <stdlib.h>

union optimizationGoBrrrrr {
    struct struct1 {
        float x;
        int y;
        int z;
    } struct1;
    struct struct2 {
        double a;
        double b;
        int c;
    } struct2;
} union1;

int main() {
    union1.struct1.x = 5.5;
    union1.struct1.y = 4;
    union1.struct1.z = 8;
    printf("%f %d %d\n", union1.struct1.x, union1.struct1.y, union1.struct1.z);

    union1.struct2.a = 5.5234072309847;
    union1.struct2.b = 4.4097230498732;
    union1.struct2.c = 9;
    printf("%f %f %d\n", union1.struct2.a, union1.struct2.b, union1.struct2.c);
    printf("%f %d %d\n", union1.struct1.x, union1.struct1.y, union1.struct1.z);
}
