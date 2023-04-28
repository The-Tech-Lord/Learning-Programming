#include <stdio.h>
#include <stdlib.h>

#define ARRAY_HEIGHT 2
#define ARRAY_LENGTH 10

void per_com_check(char numbers[ARRAY_HEIGHT][ARRAY_LENGTH + 1], int *n, int *r) {
	for (int i = 0; i < 2; i++) {
		printf(i == 0 ? "Select value for N: " : "Select value for R: ");
		if (fgets(numbers[i], (sizeof(numbers[i]) - 1), stdin) == NULL)
			printf("NULL Input\nExiting...\n");
		printf("\n");
	}

	printf("n : %d\tr: %d\n", *n, *r);
	printf("%s\n%s\n", numbers[0], numbers[1]);

	for (unsigned int i = 0; i < ARRAY_HEIGHT; i++)
		for (unsigned int ii = 0; ii < ARRAY_LENGTH; ii++)
			printf("numbers[%d][%d]: %c\n", i, ii, numbers[i][ii]);
	printf("\n");

	sscanf(numbers[0], "%d", *&n);
	sscanf(numbers[1], "%d", *&r);

	if (sscanf(numbers[1], "%d", *&r) > sscanf(numbers[0], "%d", *&n)) {
		printf("Invalid Object Number\nSelect a value within the chosen value of object total\nn = %d\n", *n);
		exit(1);
	}
}
