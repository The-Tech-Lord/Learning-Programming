#include <stdio.h>
#include <stdlib.h>

int main() {
	char *j = (char *)malloc(sizeof(char) * 2);	
	j = "ty";
	printf("%s\n", j);
}
