#include <stdio.h>
#include <stdlib.h>

struct threeNum {
    int n1, n2, n3, n4;
} num;

int main() {
    FILE *fptr;
    if ((fptr = fopen("../Binary Files/BinaryFile1.bin", "wb")) == NULL) {
        printf("Error...");
        return 1;
    }
    for (int i = 1; i <= 4; i++) {
        num.n1 = i;
        num.n2 = i;
        num.n3 = i;
        num.n4 = i;	
        if((fwrite(&num, sizeof(struct threeNum), 1, fptr)) < 1) {
            printf("File Write Error on Iteration %d...", i);
            return 1;
        }
    }
    fclose(fptr);
}
