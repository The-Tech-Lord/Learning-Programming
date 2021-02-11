#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 15;
	int b = 10;
	int c = 13;

	// Throws an error
	switch(a) {
		case (a > c && a < b): printf("Fail\n");
		case (a < c && a > b): printf("Fail\n");
		case (a > c && a > b): printf("Pass\n");
	}
}