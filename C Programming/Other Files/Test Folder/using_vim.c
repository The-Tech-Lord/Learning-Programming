#include <stdio.h>
#include <stdlib.h>

int vimFunction(int apple, int orange) {
	int age = apple + orange;
	return age * 5;
}

int main() {
	// vimFunction(5, 6);
	printf("%d", vimFunction(5, 6));	
}
