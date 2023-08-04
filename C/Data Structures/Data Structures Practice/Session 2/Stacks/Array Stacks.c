#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
	int index, size;
	char *name;
} Stack;

struct Stack* INIT(int Capacity) {
	Stack *TEMP = (Stack *)malloc(sizeof(struct Stack));
	TEMP->name = (char *)malloc(sizeof(char) * Capacity);
	TEMP->size = Capacity;
	TEMP->index = -1;
	return TEMP;
}

void Push(Stack *Stack_PTR, char Character) {
	if (Stack_PTR->index == Stack_PTR->size - 1) return;

	Stack_PTR->index++;
	Stack_PTR->name[Stack_PTR->index] = Character;
}

// Once you pop you cannot stop!!
char Pop(Stack *Stack_PTR) {
	if (Stack_PTR->index == -1) return 'y';

	return Stack_PTR->name[Stack_PTR->index--];
}

char Peek(Stack *Stack_PTR) {
	if (Stack_PTR->index == -1)
		return 'y';
	else
		return Stack_PTR->name[Stack_PTR->index];

	return 'x';
}

int main() {
	Stack *Stack_0 = INIT(26);
	for (char i = 'a'; i != 'z'; i++)
		Push(Stack_0, i);
	for (int ii = 0; ii < 26; ii++) {
		if (ii == 0)
			printf("z ");
		printf("%c ", Peek(Stack_0));
		Pop(Stack_0);
	}
	printf("\n");
}