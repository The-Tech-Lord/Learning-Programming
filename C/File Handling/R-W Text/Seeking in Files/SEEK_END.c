#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    if((fptr = fopen("../../Dummy Data/File4.txt", "w")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fputs("This is Sparta!!", fptr);

    fseek(fptr, -8, SEEK_END);
    fputs("Minecraft!!", fptr);
}