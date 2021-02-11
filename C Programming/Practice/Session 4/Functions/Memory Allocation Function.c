#include <stdio.h>
#include <stdlib.h>

void AllocFail() {
    printf("Allocation Failed...");
    exit(1);
}

void Alloc(char **Array, int size) {
    for(int i = 0; i < size; i++) {
        Array[i] = malloc(size * sizeof(char + 1));
        if (Array[i] == NULL) AllocFail();
    }
}

void AllocationFunc(void (*AllocA)(char **, int), int size, char **Array) {
    AllocA(Array, size);
    for(int i = 0; i < size; i++) {
        printf("Input Name [%d]: ", i + 1);
        fgets(Array[i], size, stdin);
    }
}

int main() {
    char *Characters[10];
    AllocationFunc(Alloc, 25, Characters);
}
