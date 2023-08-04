#include <stdio.h>
#include <stdlib.h>

typedef int Integer; //You'll be able to define your own type name
typedef double DOUBLE; //You can make them all caps to remind you of this

int main() {
    Integer a = 5;
    printf("Integer a equals: %d\n", a);

    DOUBLE b = 5.0;
    printf("Double b equals: %f", b);
}