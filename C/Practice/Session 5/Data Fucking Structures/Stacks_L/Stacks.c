#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack_ll {
	char name[50];
	int age;
	struct Stack_ll *NextStackNode;
} Stack_ll;

void StackPopTop(Stack_ll **Stack_Top) {
	if ((*Stack_Top) == NULL) {
		printf("Stack is empty");
	} else {
		Stack_ll *Temp = (*Stack_Top);
		(*Stack_Top) = (*Stack_Top)->NextStackNode;
		printf("%s\t%d\n", Temp->name, Temp->age);
		free(Temp);
	}
}

void StackList(Stack_ll **Stack_Top, char names[5][50], int ages[], int height) {
	for (int i = 0; i < height; i++) {
		Stack_ll *Plate = (Stack_ll *)malloc(sizeof(Stack_ll));
		if (Plate == NULL) return;

		strcpy(Plate->name, names[i]);
		Plate->age = ages[i];

		Plate->NextStackNode = (*Stack_Top);
		(*Stack_Top) = Plate;
	}
}

int main() {
	Stack_ll *Stack = (Stack_ll *)malloc(sizeof(Stack_ll));
	strcpy(Stack->name, "I have no fucking clue");
	Stack->age = 21;
	Stack->NextStackNode = NULL;
	char names[5][50] = {
		"Shintari Kisaragi",
		"Tsubomi Kido",
		"Shuuya Kano",
		"Marry Kozakura",
		"Kousuke Seto"
	};
	int ages[5] = { 18, 17, 17, 15, 16 };
	StackList(&Stack, names, ages, 5);
	for (int i = 0; i < 6; i++)
		StackPopTop(&Stack);

	free(Stack);
}
