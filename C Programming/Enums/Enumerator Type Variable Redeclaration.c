#include <stdio.h>
#include <stdlib.h>

enum Names {
	Ryan = 1,
	Brian = 5,
	Sophia = 0
};

int main() {
	enum Names name = Sophia;
	enum Names name = Brian; // A redeclared enum type variable cannot be redeclared
	printf("%d\n", name);
}