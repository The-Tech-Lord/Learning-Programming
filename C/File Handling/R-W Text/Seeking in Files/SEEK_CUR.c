#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    if((fptr = fopen("../../Dummy Data/File5.txt", "w")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fputs("This is Sparta!!", fptr);
    fseek(fptr, -8, SEEK_END);
    fputs("Minecraft!!", fptr);

    // Starts at the current position that the cursor is
    // currently at, in this case, it was at the end.
    fseek(fptr, 0, SEEK_CUR);
    fputs(" AAAAAAAAAAAAA", fptr);
    fclose(fptr);
}