#include <stdio.h> 
#include <stdlib.h> 
  
int main() {
    int *ptr;
    // Allocates memory to the pointer variable on the Heap
    ptr = (int *)malloc(10 * sizeof(int));
    if(ptr == NULL) {
        printf("Allocation Failed\n");
        exit(0);
    } else {
        for(int i = 0; i < 10; i++) {
            *(ptr + i) = i + 1;
            printf("%d ", *(ptr + i));
        }
        printf("\n");
    }
}