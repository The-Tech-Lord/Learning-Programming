#include <stdio.h>
#include <stdlib.h>

struct array {
	char name[50];
	int age;
	float gpa;
} array[5];

void Data() {
	for (unsigned int i = 0; i < 5; i++) {
		printf("Enter Name [%d]: ", i + 1);
		fgets(array[i].name, 50, stdin);
	}	
	for (unsigned int i = 0; i < 5; i++) {
		printf("Enter Age [%d]: ", i + 1);
		scanf("%d", &array[i].age);
	}
	for (unsigned int i = 0; i < 5; i++) {
		printf("Enter GPA [%d]: ", i + 1);
		scanf("%f", &array[i].gpa);
	}
}

void PrintData() {
	for (unsigned int i = 0; i < 5; i++) {
		printf("%s Age: %d\n GPA: %f\n", array[i].name, array[i].age, array[i].gpa);
	}
}

int main() {
	Data();
	PrintData();
}
