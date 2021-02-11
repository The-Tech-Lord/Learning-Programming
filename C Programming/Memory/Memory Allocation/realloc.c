#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

void AllocFail() {
	printf("Allocation Failed\n");
	exit(0);
}

int main() {
	char *ptr;
	ptr = (char *)malloc(10 * sizeof(char));
	if(ptr == NULL) { AllocFail(); }
	strcpy(ptr, "Hello World");

	ptr = (char *)realloc(ptr, 24 * sizeof(char));
	if(ptr == NULL) { AllocFail(); }
	strcat(ptr, " is amazing!");
	printf("%s\n", ptr);
}