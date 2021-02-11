#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name;
    name = (char *)malloc(12 * sizeof(char));
    strcpy(name, "Hello World!");

    name = realloc(name, 16 * sizeof(char));
    strcpy(name, "Hello World! Hi!");

    printf("%s\n", name);
    free(name);
}