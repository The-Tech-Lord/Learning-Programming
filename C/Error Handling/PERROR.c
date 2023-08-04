#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fptr;
	fptr = fopen("nonexistant.txt", "r");

	perror("Error");
	fclose(fptr);
}
