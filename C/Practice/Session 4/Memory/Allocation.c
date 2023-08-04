#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *string_array;
	string_array = malloc(21 * sizeof(char));
	strcpy(string_array, "C Programming Is The");
	printf("1: %s\n", string_array);

	string_array = realloc(string_array, 27 * sizeof(char));
	strcat(string_array, " Best!"); string_array[26] = '\0';
	printf("%s\n", string_array);
	free(string_array);
}
