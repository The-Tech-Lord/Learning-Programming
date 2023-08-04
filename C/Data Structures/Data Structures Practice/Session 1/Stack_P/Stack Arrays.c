#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack_A {
	int top, size;
	int *StackV;
} Stack_A;

int Empty_Stack(Stack_A *Base) {
	return Base->top == -1;
}

struct Stack_A* INIT(int capacity) {
	Stack_A *Node = (Stack_A *)malloc(sizeof(struct Stack_A));
	Node->size = capacity;
	Node->top = -1;
	Node->StackV = (int *)malloc(sizeof(int) * capacity);

	return Node;
}

bool Push(Stack_A *Base, int value) {
	if (Base->top >= Base->size - 1) return false;

	Base->top++;
	Base->StackV[Base->top] = value;
	return true;
}

int Pop(Stack_A *Base) {
	if (Empty_Stack(Base)) return 0;
	return Base->StackV[Base->top--];
}

int Peek(Stack_A *Base) {
	if (Empty_Stack(Base)) {
		printf("Underflow\n");
		return 9999;
	} else {
		return Base->StackV[Base->top];
	}
}

int main() {
	Stack_A *S0 = INIT(10);

	for (int i = 0; i < 10; i++)
		Push(S0, i * 5);
	for (int ii = 0; ii < 10; ii++) {
		printf("%d ", Peek(S0));
		Pop(S0);
	}
	printf("\n");
}
