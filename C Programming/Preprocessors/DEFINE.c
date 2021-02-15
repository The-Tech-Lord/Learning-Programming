#include <stdio.h>
#include <stdlib.h>

#define SOME_FUNCTION(x, y) x = (y * x) + 4

int main() {
    int z = 5;
    SOME_FUNCTION(z, 6);
    printf("%d\n", z);
}