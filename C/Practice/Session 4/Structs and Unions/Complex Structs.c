#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

struct valuesStruct {
	struct values {
		char name[MAX];
		int age;
		int height;
	} values1;

	struct values2 {
		char schoolName[MAX];
		int grade;
	} values2;
} Person[4];

int main() {
	char names[4][MAX] = {
		"MD Raiyan Hossain",
		"Maunia Moleno",
		"Ayin Smith",
		"Ralph"
	};
	int ages[] = { 16, 15, 15, 12 };
	int heights[] = { 6, 6, 6, 6 };
	char schoolNames[4][MAX] = {
		"Brockton High",
		"Brockton High",
		"Brockton High",
		"Unknown"
	};
	int grade[] = { 11, 10, 9, 12 };

	for(int i = 0; i < 4; i++) {
		strcpy(Person[i].values1.name, names[i]);
		Person[i].values1.age = ages[i];
		Person[i].values1.height = heights[i];
		strcpy(Person[i].values2.schoolName, schoolNames[i]);
		Person[i].values2.grade = grade[i];
	}
	for(int i = 0; i < 4; i++) {
		printf("%s\n", Person[i].values1.name);
		printf("%d\n", Person[i].values1.age);
		printf("%d\n", Person[i].values1.height);
		printf("%s\n", Person[i].values2.schoolName);
		printf("%d\n", Person[i].values2.grade);
		printf("\n\n");
	}
}