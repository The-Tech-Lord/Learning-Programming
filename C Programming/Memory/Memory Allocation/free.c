#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AllocFail() {
	printf("Allocation Failed\n");
	exit(0);
}

int main() {
	char *StrPtr = (char *)malloc(20 * sizeof(char));
	if(StrPtr == NULL) { AllocFail(); }
	strcpy(StrPtr, "Hello world! You're ");

	StrPtr = (char *)realloc(StrPtr, 28 * sizeof(char));
	if(StrPtr == NULL) { AllocFail(); }
	strcat(StrPtr, "Amazing!");

	printf("%s\n", StrPtr);
	// Frees the memory so that the OS can use the memory blocks again
	// But sometimes it might not free some of the memory or any at all
	// since there could be a chance it wipes memory another program
	// is using which could crash the system
	free(StrPtr);
}