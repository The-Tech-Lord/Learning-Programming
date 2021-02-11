#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int *arrPTR = arr;

    printf("%d\n", *(arr + 0));
    printf("%d", (*arr + 0));
}