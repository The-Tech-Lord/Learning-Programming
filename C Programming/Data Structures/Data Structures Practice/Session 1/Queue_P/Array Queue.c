#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int front, rear, size, capacity;
	int *IntegerArray;
} Node;

struct Node* INIT(int Size_Cap) {
	Node *PTR = (Node *)malloc(sizeof(struct Node));
	PTR->IntegerArray = (int *)malloc(sizeof(int) * Size_Cap);

	PTR->capacity = Size_Cap;
	PTR->rear = Size_Cap - 1;
	PTR->front = PTR->size = 0;

	return PTR;
}

void Enqueue(Node *PTR, int Value) {
	if (PTR->size == PTR->capacity) return;

	PTR->rear = (PTR->rear + 1) % PTR->capacity;
	PTR->IntegerArray[PTR->rear] = Value;
	PTR->size = PTR->size + 1;
}

int Dequeue(Node *PTR) {
	if (PTR->size == 0) return -1;

	int Value = PTR->IntegerArray[PTR->front];
	PTR->front = (PTR->front + 1) % PTR->capacity;
	PTR->size = PTR->size + 1;
	return Value;
}

int main() {
	Node *Queue_Q = INIT(10);

	for (int i = 0; i < Queue_Q->capacity; i++)
		Enqueue(Queue_Q, (i * 5) + 6);
	for (int ii = 0; ii < 10; ii++)
		printf("Q[V%d]: %d\n", (ii + 1), Dequeue(Queue_Q));
}