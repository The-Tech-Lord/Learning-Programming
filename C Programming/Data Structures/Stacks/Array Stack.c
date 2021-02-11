#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack {
	int size;
	int top;
	int* stackValues;
} Stack;

int Empty_Stack(Stack *PTR_S) {
	return PTR_S->top == -1;
}

struct Stack* setup(int capacity) {
	struct Stack *PTR_S = (struct Stack*)malloc(sizeof(struct Stack));

	PTR_S->size = capacity;
	PTR_S->top = -1;
	PTR_S->stackValues = (int *)malloc(sizeof(int) * capacity);

	return PTR_S;
}

bool push(Stack *PTR_S, int value) {
	if (PTR_S->top >= PTR_S->size - 1)
		return false;

	PTR_S->top++;
	PTR_S->stackValues[PTR_S->top] = value;

	return true;
}

int peek(Stack *PTR_S) {
	if (Empty_Stack(PTR_S)) {
		printf("Underflow");
		exit(1);
	} else {
		return PTR_S->stackValues[PTR_S->top];
	}
}

int pop(Stack *PTR_S) {
	if (Empty_Stack(PTR_S)) return 0;

	return PTR_S->stackValues[PTR_S->top--];
}

int main() {
	Stack *str_0 = setup(5);
	Stack *str_1 = setup(10);
	Stack *str_2 = setup(50);

	// Stack 0
	for (int i = 0; i < 5; i++)
		push(str_0, i);
	for (int i = 0; i < 5; i++) {
		if (i == 0) printf("Values of STR_0: ");
		printf("%d ", pop(str_0));
	}
	printf("\n");

	// Stack 1
	for (int ii = 0; ii < 10; ii++)
		push(str_1, ii + 6);
	for (int ii = 0; ii < 10; ii++) {
		if (ii == 0) printf("Values of STR_1: ");
		printf("%d ", pop(str_1));
	}
	printf("\n");

	// Stack 2
	for (int iii = 0; iii < 50; iii++)
		push(str_2, (iii * 7) + 15);
	for (int iii = 0; iii < 50; iii++) {
		if (iii == 0) printf("Values of STR_2: ");
		printf("%d ", pop(str_2));
	}
	printf("\n");
}
