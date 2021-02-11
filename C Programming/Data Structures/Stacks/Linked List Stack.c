#include <stdio.h>
#include <stdlib.h>

typedef struct Stack_ll {
	int data;
	struct Stack_ll *next;
} Stack_ll;

void push(Stack_ll **Node, int value) {
	Stack_ll *new_node = (Stack_ll *)malloc(sizeof(struct Stack_ll));
	if (new_node == NULL) exit(1);

	new_node->data = value;
	new_node->next = *Node;
	(*Node) = new_node;
}

void pop(Stack_ll **stack) {
	if (stack != NULL) {
		Stack_ll *tempPTR = *stack;
		*stack = (*stack)->next; // Makes Stack point to the next node and temp frees the previous node
		free(tempPTR);
	} else {
		printf("Stack is empty\n");	
	}
}

int top(Stack_ll *stack) {
	if (stack != NULL) {
		return stack->data;
	} else {
		printf("Stack is empty\n");
	}
	return 0;
}

int main() {
	Stack_ll *root = (Stack_ll *)malloc(sizeof(struct Stack_ll));
	if(root == NULL) exit(2);

	root->data = 5;
	root->next = NULL;

	for (int i = 0; i < 5; i++)
		push(&root, i);

	for (int i = 0; i < 6; i++) {
		printf("%d ", top(root));
		pop(&root);
	}
}
