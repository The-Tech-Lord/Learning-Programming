#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 }
	};
	for(int i = 0; i < 3; i++)
		for(int k = 0; k < 5; k++)
			printf("array[%d][%d] value: %d\n", i, k, array[i][k]);

	int MulArray[2][3][5] = {
		{
			{ 1, 2, 3, 4, 5},
			{ 6, 7, 8, 9, 10 },
			{ 11, 12, 13, 14, 15},
		},
		{
			{ 16, 17, 18, 19, 20 },
			{ 21, 22, 23, 24, 25 },
			{ 26, 27, 28, 29, 30 }
		}
	};
	for(int i = 0; i < 2; i++)
		for(int k = 0; k < 3; k++)
			for(int h = 0; h < 5; h++)
				printf("MulArray[%d][%d][%d] value: %d\n", i, k, h, MulArray[i][k][h]);
}