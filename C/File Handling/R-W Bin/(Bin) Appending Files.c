#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    if((fptr = fopen("../Binary Files/BinaryFile2.bin", "wb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    int num1 = 10, num2 = 15;
    fwrite(&num1, sizeof(int), 1, fptr);
    fclose(fptr);

    if((fptr = fopen("../Binary Files/BinaryFile2.bin", "ab")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fwrite(&num2, sizeof(int), 1, fptr);
    fclose(fptr);
}