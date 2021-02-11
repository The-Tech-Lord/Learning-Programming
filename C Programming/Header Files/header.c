#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Custom Headers
#include "addition.h"
#include "subtraction.h"
#include "someComplexStruct.h"

int main() {
	strcpy(complex.name, "John");
	complex.gpa = 3.14;
	complex.yolo = 4.5;
	complex.True = false;

	printf("%d\n", subtraction(5, 6));
	printf("%d\n", addition(5, 6));

	printf("%s\n", complex.name);
	printf("%c\n", complex.grade);
	printf("%f\n", complex.gpa);
	printf("%f\n", complex.yolo);
	
	if (!complex.True) printf("Not True\n");	
}
