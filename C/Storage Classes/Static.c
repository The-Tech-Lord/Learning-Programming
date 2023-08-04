#include <stdio.h>
#include <stdlib.h>

int add() {
	static int c; // By using static, it preserves the value of the variable throughout the lifetime of the program.
				  // It will also limit the scope of the variable/function to the file it was declared.
				  // As shown here, it will need to be declared separately then you can manipulate its value.
	c++;
	return c;
}

int main() {
	int count ;
	count = add();
	count = add();
	printf("%d\n", count);
}