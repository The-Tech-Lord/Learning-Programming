#include <stdio.h>
#include <stdlib.h>

struct nums {
    int n1, n2, n3;
} num;

struct nums2 {
    int n1, n2, n3;
} num2;

int main() {
    FILE *fptr; 
    if((fptr = fopen("../../Binary Files/BinaryFile4.bin", "wb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    for(int i = 0; i < 5; i++) {
        num.n1 = i + (6 * i) + 1;
        num.n2 = i * (2 + i) + 1;
        num.n3 = i * (5 * i) + 1;
        if((fwrite(&num, sizeof(struct nums), 1, fptr)) < 1) {
            printf("Write Error...");
            return 2;
        }
    }
    fclose(fptr);


    if((fptr = fopen("../../Binary Files/BinaryFile4.bin", "rb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fseek(fptr, -sizeof(struct nums), SEEK_END);
    for(int i = 0; i < 5; i++) {
        if((fread(&num2, sizeof(struct nums2), 1, fptr)) < 1) {
            printf("Read Error...");
            return 1;
        }
        printf("I[%d]: %d %d %d\n", i, num2.n1, num2.n2, num2.n3);
        fseek(fptr, -2 * sizeof(struct nums2), SEEK_CUR);
    }
}