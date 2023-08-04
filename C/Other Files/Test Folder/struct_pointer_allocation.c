#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int age;
	int grade;
} person;

int main() {
	person *myperson, mypersonperson;
	myperson = &mypersonperson;
	myperson->age = 5;
	myperson->grade = 1;

	printf("%d %d\n", myperson->age, myperson->grade);
}