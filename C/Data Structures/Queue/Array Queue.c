#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Queue_A {
	int front, rear, size, capacity;
	int *QValues;
} Queue_A;

struct Queue_A* init(int capacity) {
	Queue_A *tmp = (Queue_A *)malloc(sizeof(struct Queue_A));
	if (tmp == NULL) exit(1);

	tmp->capacity = capacity;
	tmp->rear = capacity - 1;
	tmp->size = tmp->front = 0;
	tmp->QValues = (int *)malloc(sizeof(int) * capacity);
	return tmp;
}

void enqueue(Queue_A *Queue, int value) {
	if (Queue->size == Queue->capacity) return;
	
    Queue->rear = (Queue->rear + 1) % Queue->capacity;
	Queue->QValues[Queue->rear] = value;
	Queue->size = Queue->size + 1;
}

int dequeue(Queue_A *Queue) {
	if (Queue->size == 0) return 0;

	int item = Queue->QValues[Queue->front];
	Queue->front = (Queue->front + 1) % Queue->capacity;
	Queue->size = Queue->size - 1;
	return item;
}

int main() {
	Queue_A *q1 = init(5);

	for (int i = 0; i < 5; i++)
		enqueue(q1, (i * 5) + 8);

	for (int ii = 0; ii < 5; ii++)
		printf("%d ", dequeue(q1));

	printf("\n");

	for (int i = 0; i < 5; i++)
		enqueue(q1, (i * 5) + 8);

	for (int ii = 0; ii < 5; ii++)
		printf("%d ", dequeue(q1));

	printf("\n");
}
