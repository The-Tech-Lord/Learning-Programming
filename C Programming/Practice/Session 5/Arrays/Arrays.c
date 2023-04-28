#include <stdio.h>
#include <stdlib.h>

int main() {
	char Nightmare[13];
	char Placeholder[] = "Hello World!";
	for (unsigned int i = 0; i < (sizeof(Placeholder) / sizeof(Placeholder[0])); i++)
		Nightmare[i] = Placeholder[i];
	printf("%s\n", Nightmare);	
}
