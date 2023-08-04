#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    if((fptr = fopen("../../Dummy Data/File3.txt", "w")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fputs("This is Sparta!!", fptr);

    fseek(fptr, 7, SEEK_SET);
    fputs(" Minecraft!!", fptr);
    fclose(fptr);
}