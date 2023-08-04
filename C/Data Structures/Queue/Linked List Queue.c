#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define QUEUE_EMPTY INT_MIN

typedef struct Node {
	int data;
	struct Node *next;
} Node;

typedef struct {
	Node *head;
	Node *tail;
} Queue_ll;

void init_queue(Queue_ll *Q) {
	Q->head = NULL;
	Q->tail = NULL;
}

void enqueue(Queue_ll *Q, int value) {
	Node *new_node = (Node *)malloc(sizeof(struct Node));
	if (new_node == NULL) exit(1);

	new_node->data = value;

	// If the queue is not empty point the node it's currently pointing to
	// to point to new_node and make Q->tail point to the new node
	if (Q->tail != NULL)
		Q->tail->next = new_node;

	Q->tail = new_node;

	// Point head to the new_node if it isn't already pointing to a node
	if (Q->head == NULL)
		Q->head = new_node;
}

int dequeue(Queue_ll *Q) {
	if (Q->head == NULL) return QUEUE_EMPTY;
	Node *tmpPTR = Q->head;
	int result = tmpPTR->data;
	Q->head = Q->head->next;

	if (Q->head == NULL)
		Q->tail = NULL;

	free(tmpPTR);
	return result;
}

int main() {
	Queue_ll q1, q2, q3;

	init_queue(&q1);
	init_queue(&q2);
	init_queue(&q3);

	enqueue(&q1, 5);
	enqueue(&q2, 6);
	enqueue(&q2, 9);
	enqueue(&q2, 10);
	enqueue(&q3, 4);

	for (int t = 0, i = 0; (i = dequeue(&q2)) != QUEUE_EMPTY; t++)
		printf("Q2[V%d]: %d\n", t, i);
}
