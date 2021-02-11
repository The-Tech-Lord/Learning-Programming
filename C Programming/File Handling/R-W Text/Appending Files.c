#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    if((fptr = fopen("../Dummy Data/File2.txt", "w")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fprintf(fptr, "Hello ");
    fclose(fptr);
    if((fptr = fopen("../Dummy Data/File2.txt", "a")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fprintf(fptr, "world!");
    fclose(fptr);
}