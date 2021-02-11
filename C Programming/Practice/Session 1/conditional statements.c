#include <stdio.h>
#include <stdlib.h>


int main() {
	// If Statements
	int a = 4;
	int b = 7;
	int c = 2;

	if (a < b && c != b) { printf("Hello world!! B is better than all of you!!\n"); }
	switch (b) {
		case 1: if (a == 3)
				{ printf("A == %d\n", a);
				}
		case 2: if (a == 7)
				{ printf("A == %d\n", a);
				}
		// Yeah, I'm not writting that many lines of code for a practice file...
		case 7: if (a == 4)
				{ printf("A == %d\n", a);
				}
	}

	int d = b > a ? b : a;
	printf("%d\n", d);

	do {
		printf("%d\n", a);
		a--;
	} while (a > 0);

	a = 5;
	while (a < b) {
		printf("A == %d\n", a);
		a++;
	}

	for (int j = 5; j > -1; j--) { printf("J == %d\n", j); }

	while (b > a) {
		b--;
		if (b == 5) { break; }
	}
	printf("While loop broken!!\n");

	int e = 10;
	while (e > 1) {
		if (e == 5) {
			e--;
			continue;
		}
		printf("E == %d\n", e);
		e--;
	}
}