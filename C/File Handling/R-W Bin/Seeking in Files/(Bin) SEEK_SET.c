#include <stdio.h>
#include <stdlib.h>

struct nums {
    int n1, n2, n3;
} num;

int main() {
    FILE *fptr;
    if((fptr = fopen("../../Binary Files/BinaryFile3.bin", "wb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    for(unsigned int i = 0; i < 5; i++) {
        num.n1 = i + 1;
        num.n2 = i * 2;
        num.n3 = i * 5;
        if((fwrite(&num, sizeof(struct nums), 1, fptr)) < 1) {
            printf("File Write Error...");
            return 1;
        }
    }
    fclose(fptr);


    if((fptr = fopen("../../Binary Files/BinaryFile3.bin", "rb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    for(int i = 0; i < 2; i++) {
        fseek(fptr, sizeof(struct nums), SEEK_SET);
        if((fread(&num, sizeof(struct nums), 1, fptr)) < 1) {
            printf("Read Error...");
            return 1;
        }
        printf("I[%d]: %d %d %d\n", i, num.n1, num.n2, num.n3);
    }
}