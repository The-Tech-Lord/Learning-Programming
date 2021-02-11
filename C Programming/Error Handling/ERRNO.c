#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
	FILE* fptr;
	fptr = fopen("FUCK YOUUUUUUU.txt", "r");
	
	fprintf(stderr, "ERROR ERROR: %s\n", strerror(errno));
	printf("ERRNO: %d\n", errno);
	fclose(fptr);	
}
