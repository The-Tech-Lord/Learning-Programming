#include <stdio.h>
#include <stdlib.h>

typedef struct Queue_Node {
	int data;
	struct Queue_Node *next;
} Q_Node;

typedef struct {
	Q_Node *head;
	Q_Node *tail;
} Q_PTR;

void INIT(Q_PTR *Q) {
	Q->head = NULL;
	Q->tail = NULL;
}

void Enqueue(Q_PTR *PTR, int value) {
	Q_Node *Node = (Q_Node *)malloc(sizeof(struct Queue_Node));
	Node->data = value;

	if (PTR->tail != NULL)
		PTR->tail->next = Node;
	PTR->tail = Node;

	if (PTR->head == NULL)
		PTR->head = Node;
}

int Dequeue(Q_PTR *PTR) {
	if (PTR->head == NULL) return -1;
	Q_Node *TEMP = PTR->head;
	int result = TEMP->data;
	PTR->head = PTR->head->next;

	if (PTR->head == NULL)
		PTR->tail = NULL;
	
	free(TEMP);
	return result;
}

int main() {
	Q_PTR Q1;
	INIT(&Q1);
	
	Enqueue(&Q1, 6);
	Enqueue(&Q1, 9);
	Enqueue(&Q1, 10);

	for (int i = 0, t = 0; (t = Dequeue(&Q1)) != -1; i++)
		printf("Q1[V%d]: %d\n", i, t);
}
