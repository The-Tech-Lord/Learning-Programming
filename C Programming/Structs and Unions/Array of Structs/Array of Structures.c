#include <stdio.h>
#include <stdlib.h>

struct Student {
	int age;
	float gpa;
	char name[30];
};

int main() {
	struct Student students[3];
	for (int i = 0; i < 3; i++) {
		printf("Enter Student %d Age: ", i + 1); scanf("%d", &students[i].age);
		printf("Enter Student %d GPA: ", i + 1); scanf("%f", &students[i].gpa);
		printf("Enter Student %d Name: ", i + 1); scanf("%30s", students[i].name); printf("\n");
	}

	for (int k = 0; k < 3; k++) {
		printf("Student Name: %s\n", students[k].name);
		printf("Age: %d\n", students[k].age);
		printf("GPA: %f\n", students[k].gpa);
	}
}