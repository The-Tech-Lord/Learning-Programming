#include <stdio.h>
#include <stdlib.h>

struct Bin {
	int x;
} Bin;

struct Bin2 {
	int x;
} Bin2;

int main() {
	FILE* fptr;
	if ((fptr = fopen("BinFile.bin", "wb")) == NULL) {
		printf("File Error...");
		exit(1);
	}
	Bin.x = 5;
	if ((fwrite(&Bin, sizeof(struct Bin), 1, fptr)) < 1) {
		printf("Write Error...");
		exit(1);
	}

	if ((freopen("BinFile.bin", "rb", fptr)) == NULL) {
		printf("Reopening of File Failed");
		exit(1);
	}
	if ((fread(&Bin2, sizeof(struct Bin2), 1, fptr)) < 1) {
		printf("Reading of File Failed");
		exit(1);
	}
	printf("Bin2 Value: %d\n", Bin2.x);
	fclose(fptr);
}
