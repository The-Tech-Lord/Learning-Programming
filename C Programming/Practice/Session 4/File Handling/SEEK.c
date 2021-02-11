#include <stdio.h>
#include <stdlib.h>

struct Num {
	int n1, n2, n3, n4;
} Num;

struct Num2 {
	int n1, n2, n3, n4;
} Num2;

int main() {
	FILE* fptr;
	if ((fptr = fopen("BinFile2.bin", "wb")) == NULL) {
		printf("File Error...");
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		Num.n1 = i;
		Num.n2 = i * 2;
		Num.n3 = (i * 15) / 2;
		Num.n4 = (i - 8) * 1000;
		if ((fwrite(&Num, sizeof(struct Num), 1, fptr)) < 1) {
			printf("Write Error");
			exit(1);
		}
	}
	freopen("BinFile2.bin", "rb", fptr);

	fseek(fptr, 0, SEEK_SET); // This is just here for filler, it just puts the "cursor" at the beginning of the file
	fseek(fptr, -sizeof(struct Num2), SEEK_END);
	
	for (int i = 0; i < 10; i++) {
		if ((fread(&Num2, sizeof(struct Num2), 1, fptr)) < 1) {
			printf("Read Error...");
			exit(1);
		}
		printf("I[%d]: %d %d %d %d\n", i + 1, Num2.n1, Num2.n2, Num2.n3, Num2.n4);
		fseek(fptr, -2 * sizeof(struct Num2), SEEK_CUR);
	}
	fclose(fptr);
}
