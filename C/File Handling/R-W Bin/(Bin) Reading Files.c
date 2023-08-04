#include <stdio.h>
#include <stdlib.h>

struct threeNum {
    int n1, n2, n3, n4;
} num;

int main() {
    FILE *fptr;
    if((fptr = fopen("../Binary Files/BinaryFile1.bin", "rb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    for(int i = 0; i < 4; i++) {
        if((fread(&num, sizeof(struct threeNum), 1, fptr)) < 1) {
            printf("Read Error on Iteration %d...", i + 1);
            return 2;
        }
        printf("I[%d]: %d %d %d %d\n", i, num.n1, num.n2, num.n3, num.n4);
    }
}
