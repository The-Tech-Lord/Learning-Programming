#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AllocFail() {
    printf("Allocation Failed");
    exit(0);
}

int main() {
    char *ARRAY[5];
    ARRAY[0] = malloc(13 * sizeof(char));
    if(ARRAY[0] == NULL) AllocFail();
    strcpy(ARRAY[0], "Hello World!");
    printf("%s\n", ARRAY[0]);
}