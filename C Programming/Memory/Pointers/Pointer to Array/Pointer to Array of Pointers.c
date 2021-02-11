#include <stdio.h>
#include <stdlib.h>

int ARRAY_SIZE = 5;

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int *arrPTR[ARRAY_SIZE];

    // Assigns memory address to pointers
    for (int i = 0; i < ARRAY_SIZE; i++) { arrPTR[i] = &arr[i]; }
    // Prints out the memory addresses and values contained in the pointers
    for (int j = 0; j < ARRAY_SIZE; j++) { printf("Address: %p\t Value: %d\n", arrPTR[j], *arrPTR[j]); }
}