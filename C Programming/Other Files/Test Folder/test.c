#include <stdio.h>
#include <stdlib.h>

enum flags {
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

int main() {
	int result = BOLD | UNDERLINE;
	printf("%d\n", result);
}