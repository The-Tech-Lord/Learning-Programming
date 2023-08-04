#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) { return (a + b);}
int subtraction(int a, int b) { return (a - b); }

int (*FUNC_PTR(const char character))(int, int) {
	switch(character) {
		case '+': return &addition;
		case '-': return &subtraction;
	}
	return 0;
}

int main() {
	printf("%d\n", FUNC_PTR('+')(5, 6));	
}
