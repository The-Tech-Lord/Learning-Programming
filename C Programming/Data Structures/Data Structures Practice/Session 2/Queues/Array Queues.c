#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
	int findex, rindex, elements, capacity;
	int *IArray;
} Queue;

void INIT(Queue **Queue_Q, int capacity) {
	(*Queue_Q) = (Queue *)malloc(sizeof(struct Queue));
	if ((*Queue_Q) == NULL) exit(1);

	(*Queue_Q)->IArray = (int *)malloc(sizeof(int) * capacity);
	if ((*Queue_Q)->IArray == NULL) exit(1);

	(*Queue_Q)->findex = (*Queue_Q)->elements = 0;
	(*Queue_Q)->capacity = capacity;
	(*Queue_Q)->rindex = capacity - 1;
}

void Enqueue(Queue **Queue_Q, int Value) {
	if ((*Queue_Q)->elements == (*Queue_Q)->capacity) exit(1);

	(*Queue_Q)->rindex = ((*Queue_Q)->rindex + 1) % (*Queue_Q)->capacity;
	(*Queue_Q)->IArray[(*Queue_Q)->rindex] = Value;
	(*Queue_Q)->elements++;
}

int Dequeue(Queue **Queue_Q) {
	if ((*Queue_Q)->elements == 0) return 1;

	int Element = (*Queue_Q)->IArray[(*Queue_Q)->findex];
	(*Queue_Q)->findex = ((*Queue_Q)->findex + 1) % (*Queue_Q)->capacity;
	(*Queue_Q)->elements--;
	return Element;
}

int main() {
	Queue *Root_0;
	INIT(&Root_0, 10);

	for (int i = 0; i < Root_0->capacity; i++)
		Enqueue(&Root_0, (i * 5) + 18);
	while (Root_0->elements != 0)
		printf("%d %d\n", Dequeue(&Root_0), Root_0->elements);
	printf("\n");
}