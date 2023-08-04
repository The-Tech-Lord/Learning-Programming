#include <stdio.h>
#include <stdlib.h>

struct nums {
    int n1, n2, n3, n4;
} nums;

struct nums2 {
    int n1, n2, n3, n4;
} nums2;

int main() {
    FILE *fptr;
    if((fptr = fopen("../../Binary Files/BinaryFile5.bin", "wb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    for(int i = 0; i < 5; i++) {
        nums.n1 = i + (6 * i) + 1;
        nums.n2 = i * (2 + i) + 1;
        nums.n3 = i * (5 * i) + 1;
        nums.n4 = i * (9 + i) + 1;
        if((fwrite(&nums, sizeof(struct nums), 1, fptr)) < 1) {
            printf("Write Error...");
            return 1;
        }
    }
    fclose(fptr);


    if((fptr = fopen("../../Binary Files/BinaryFile5.bin", "rb")) == NULL) {
        printf("File Error...");
        return 1;
    }
    fseek(fptr, -2 * sizeof(struct nums), SEEK_END);
    fread(&nums2, sizeof(struct nums), 1, fptr);
    printf("%d %d %d %d\n", nums2.n1, nums2.n2, nums2.n3, nums2.n4);
    fseek(fptr, 0, SEEK_CUR);
    fread(&nums2, sizeof(struct nums), 1, fptr);
    printf("%d %d %d %d", nums2.n1, nums2.n2, nums2.n3, nums2.n4);
}