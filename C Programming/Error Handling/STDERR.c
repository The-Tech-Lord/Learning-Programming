#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
	FILE* fptr;
	fptr = fopen("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.txt", "r");
	
	if (fptr == NULL)
		fprintf(stderr, "Error: %s\n", strerror(errno));
}
