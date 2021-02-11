#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
	printf("%d\n", (a + b));
}
int subtract(int a, int b) {
	printf("%d\n", (a - b));
}

int (*function(const char character))(int, int) {
	switch (character) {
		case '+': return add;
		case '-': return subtract;
	}
}

int main() {
	(*function('+'))(5, 4);
}