#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fptr;
	if ((fptr = fopen("Dummy Data/File6.txt", "w")) == NULL) {
		printf("File Error...");
		exit(1);
	}

	for (char c = 'a'; c != 'z'; c++)
		fputc(c, fptr); // fputc writes a character to a file

	freopen("Dummy Data/File6.txt", "r", fptr);
	int c;
	// fgetc gets the next character in the file
	while ((c = fgetc(fptr)) != EOF) {
		putchar(c);
	}
	fclose(fptr);
}
