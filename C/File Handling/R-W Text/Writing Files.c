#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    fptr = fopen("../Dummy Data/File1.txt", "w");
    if (fptr == NULL) {
        printf("Error\n");
        return 0;
    }

    int num1, num2;
    printf("Enter Numbers: ");
    scanf("%d %d", &num1, &num2);
    fprintf(fptr, "%d %d", num1, num2);

    fclose(fptr);
}