#include <stdio.h>
#include <stdlib.h>

typedef struct VALUES1 {
    int num1;
    float num2;
    double num3;
} VALUES1;

typedef struct VALUES2 {
    int num1;
    float num2;
    double num3;
} VALUES2;

int main() {
    FILE *fptr;
    if ((fptr = fopen("BIN-Files/File1.bin", "wb")) == NULL) {
        printf("Error Opening File...\n");
        return 1;
    }
    VALUES1 variables1;
    VALUES2 variables2;
    for (int i = 0; i < 10; i++) {
        variables1.num1 = i;
        variables1.num2 = ((float)i + 5.5) * 10.0;
        variables1.num3 = ((double)i + 7.3823) * 3;
        if ((fwrite(&variables1, sizeof(struct VALUES1), 1, fptr) < 1)) {
            printf("Error Writing to File...\n");
            printf("Interation[%d]...\n", i + 1);
            return 1;
        }
    }

    if ((freopen("BIN-Files/File1.bin", "rb", fptr)) == NULL) {
        printf("Reopening File to Read Mode Failed...\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        if ((fread(&variables2, sizeof(struct VALUES2), 1, fptr)) < 1) {
            printf("Error Reading from File...\n");
            printf("Interation[%d]...\n", i + 1);
        }
        printf("I[%d]: %d %f %lf\n", i, variables2.num1, variables2.num2, variables2.num3);
    }
    fclose(fptr);
}