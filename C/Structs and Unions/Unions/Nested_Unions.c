#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Nest {
    int x;
    int y;
    union AxeBodySpray{
        float z;
        float a;
    } axe;
};

int main() {
    union Nest data;

    data.x = 20.0;
    printf("%d\n", data.x);

    data.axe.z = 5.0;
    printf("%f\n", data.axe.z);

    // Since they all occupy the same space, the previous data would have displayed random numbers
    // meaning that they got corrupted and the latest updated would be displayed correctly.
    // But since they were displayed before changing a variable or assigning one, it displayed well.
}