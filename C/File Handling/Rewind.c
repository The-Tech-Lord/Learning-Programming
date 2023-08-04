#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fptr;
	double DOUBLE_ARR[50];
	double DOUBLE_ARR_2[50];
	if ((fptr = fopen("Binary Files/BinaryFile6.bin", "wb")) == NULL) {
		printf("File Error...");
		exit(1);
	}
	for (unsigned int i = 0; i < (sizeof(DOUBLE_ARR) / sizeof(DOUBLE_ARR[0])); i++) {
		DOUBLE_ARR[i] = i * 3.14536 + 9.4;
		if ((fwrite(&DOUBLE_ARR[i], sizeof(double), 1, fptr)) < 1) {
			printf("Write Error...");
			exit(1);
		}
	}
	freopen("Binary Files/BinaryFile6.bin", "rb", fptr);
	fseek(fptr, -sizeof(double), SEEK_END);
	fread(&DOUBLE_ARR_2[0], sizeof(double), 1, fptr);
	printf("%lf\n", DOUBLE_ARR_2[0]);
	fclose(fptr);
}
