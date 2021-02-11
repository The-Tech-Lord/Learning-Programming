#include <stdio.h>
#include <stdlib.h>

int main() {
	// If there is a register available in the CPU, it will put it in there
	// Otherwise it will store the variable in memory.
	// If it gets stored in the CPU register, it can make your program run a lot faster.
	for(register int counter = 0; counter < 1000; counter++) {
		printf("%d ", counter);
	}
}