#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fptr;
	char string[] = ";aldskjf;laksdjf;lajsd;lkfj;laskdjf;ljasd;lkfjweoa;ilnsdkajflkzxc,m";
	if ((fptr = fopen("TextFile.txt", "w")) == NULL) {
		printf("File Error...");
		exit(1);
	}
	fprintf(fptr, "%s", string);
	
	if ((freopen("TextFile.txt", "r", fptr)) == NULL) {
		printf("Reopening Error...");
		exit(1);
	}
	char string2[sizeof(string) / sizeof(string[0])];
	fscanf(fptr, "%s", string2);
	printf("%s\n", string2);
	fclose(fptr);
}
