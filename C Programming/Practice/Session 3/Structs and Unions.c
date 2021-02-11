#include <stdio.h>
#include <stdlib.h>

void AllocFail() {
    printf("Allocation Failed");
    exit(0);
}

typedef struct Allocation {
    int *NumArray[5];
    void (*AllocFunc)(int **, int);
} Alloc;

// Did ya boi just make a 2D Array with pointers!?!?!?!??!
void AllocationFunc(int **NumArray, int size) {
    for(int i = 0; i < size; i++) {
        NumArray[i] = malloc(10 * sizeof(int));
        if(NumArray[i] == NULL) AllocFail();
    }
}

void Input(int **NumArray, int ArraySize) {
    for(int i = 0; i < ArraySize; i++)
        for(int k = 0; k < 10; k++)
            NumArray[i][k] = k + 1;

    for(int i = 0; i < ArraySize; i++) {
        for(int k = 0; k < 10; k++) {
            printf("%d ", NumArray[i][k]);
            if(k == 9) printf("\n");
        }
    } 
}

int main() {
    Alloc alloc;
    alloc.AllocFunc = &AllocationFunc;
    alloc.AllocFunc(alloc.NumArray, 5);

    Input(alloc.NumArray, 5);
}