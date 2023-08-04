#include <stdio.h>
#include <stdlib.h>

void getValue(int *my_pointer) {
    *my_pointer = 10000;
}

int main() {
    int get_the_value;
    getValue(&get_the_value);

    printf("%d\n", get_the_value);
}