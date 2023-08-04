#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[] = { 15, 16, 17, 45, 29 };
	int *arrPTR1 = &array[0];
	for (unsigned int i = 0; i < (sizeof(array) / sizeof(array[0])); i++)
		printf("Array 1: %d\n", *arrPTR1++);
	
	int array2[2][5] = {
		{ 15, 16, 17, 45, 29 },
		{ 238, 23432, 2342, 24552, 2422 }
	};
	int (*arrayPTR2)[2][5] = &array2;
	for (unsigned int ii = 0; ii < 2; ii++)
		for (unsigned int iii = 0; iii < 5; iii++)
			printf("Array 2: %d\n", *(*(*arrayPTR2 + ii) + iii));
}
