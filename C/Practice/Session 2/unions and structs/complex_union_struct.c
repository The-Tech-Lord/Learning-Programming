#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union ComplexAsHellUnion {
	struct student {
		int age;
		float gpa;
		char name[50];
		int height;
	} student;

	struct values {
		int xindex;
		int yIndex;
		int zIndex;

		union someUnion {
			int hjkl;
			int wasd;
			float yuio;

			struct nestedStruct {
				double whyMan;
				double endMySuffering;
				float please;
			} nestStruct;

			struct nestedStruct2 {
				int uTil;
				float seven;
				float snowman;
			} nestStruct2;
		} someUnion;
	} values;
};

int main() {
	union ComplexAsHellUnion complex;
	strcpy(complex.student.name, "Kenjirou Tateyama");
	printf("%s\n", complex.student.name);
}