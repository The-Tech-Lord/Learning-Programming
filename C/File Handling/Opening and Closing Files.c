#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fptr; // Pointer of type File
    fptr = fopen("File1.txt", "w");
    if (fptr == NULL) {
        printf("Error\n");
        return 0;
    }
    // If the file doesn't exist, it will create the file for you
    
    fclose(fptr); // Will close the file stream
}