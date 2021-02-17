#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr; char character;
    if ((fptr = fopen("Dummy Data/File7.txt", "w")) == NULL) {
        printf("Error Writing to File\n");
    }
    fprintf(fptr, "Hello world!\n");

    freopen("Dummy Data/File7.txt", "r", fptr);

    while ((character = fgetc(fptr)) != EOF) { // Standard I/O File Reading Loop
        putchar(character);
    }
    if (feof(fptr))
        printf("End of file!\n");
    fclose(fptr);
}