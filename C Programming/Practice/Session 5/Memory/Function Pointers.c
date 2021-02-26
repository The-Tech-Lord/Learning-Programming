#include <stdio.h>
#include <stdlib.h>

void IHaveNoFuckingCluePleaseHelpMeIAmHangingByAThread(int *PTR_A, int PTR_SIZE) {
    PTR_A = (int *)malloc(sizeof(int) * PTR_SIZE);
    if (PTR_A == NULL)
        return;
    for (int i = 0; i < PTR_SIZE; i++) {
        PTR_A[i] = i * 5;
        printf("Value: %d\n", *(PTR_A + i));
    }
    free(PTR_A);
}

int main() {
    int *array = NULL;
    IHaveNoFuckingCluePleaseHelpMeIAmHangingByAThread(array, 10);
}
