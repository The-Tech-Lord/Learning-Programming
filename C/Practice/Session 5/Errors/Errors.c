#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
	FILE *fptr = fopen("IDONTKNOWMAN.txt", "r");
	
	fprintf(stderr, "ERROR ERROR ERROR: %s\n", strerror(errno));
	printf("%d\n", errno);
	fclose(fptr);
}
