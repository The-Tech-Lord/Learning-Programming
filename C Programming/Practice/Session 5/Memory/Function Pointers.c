#include <stdio.h>
#include <stdlib.h>

int AllocationFunction(int **PTR, int PTR_SIZE) {
    *PTR = (int *)malloc(sizeof(int) * PTR_SIZE);
    if (*PTR == NULL)
        return 1;
    return 0;
}

void IHaveNoFuckingCluePleaseHelpMeIAmHangingByAThread(int (*AllocFunc)(int **, int), int *PTR_A, int PTR_SIZE) {
    if (AllocFunc(&PTR_A, PTR_SIZE) == 1)
        exit(1);
    for (int i = 0; i < PTR_SIZE; i++) {
        PTR_A[i] = i * 5;
        printf("Value: %d\n", *(PTR_A + i));
    }
    free(PTR_A);
}

int main() {
    int *array = NULL;
    IHaveNoFuckingCluePleaseHelpMeIAmHangingByAThread(AllocationFunction, array, 10);
}
