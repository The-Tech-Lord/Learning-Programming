#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
	FILE *fptr = fopen("skldjfhlkajdshflkjasd.txt", "r");

	perror("FUCK");
	fclose(fptr);
}
