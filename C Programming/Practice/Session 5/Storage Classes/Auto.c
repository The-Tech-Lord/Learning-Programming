#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 5;
	{
		int b = 6;
		auto int a = 9;
		printf("%d\n", a);
	}
}
