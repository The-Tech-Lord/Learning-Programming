#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num3, num4;
    fptr = fopen("../Dummy Data/File1.txt", "r");
    if (fptr == NULL) {
        printf("Error\n");
        return 0;
    }

    fscanf(fptr, "%d %d", &num3, &num4);
    printf("%d %d", num3, num4);
    fclose(fptr);
}