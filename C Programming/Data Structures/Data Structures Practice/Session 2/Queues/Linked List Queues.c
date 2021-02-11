#include <stdio.h>
#include <stdlib.h>

typedef struct Queue_Node {
	int IO_NUM;
	char ISO;
	struct Queue_Node *Addr;
} Queue_Node;

typedef struct Node_PTR {
	Queue_Node *Head;
	Queue_Node *Tail;
} Node_PTR;

struct Node_PTR* INIT() {
	Node_PTR *PTR = (Node_PTR *)malloc(sizeof(Node_PTR));
	PTR->Head = PTR->Tail = NULL;
	return PTR;
}

void Enqueue(Node_PTR **PTR, int IO_NUM_V, char ISO_V) {
	Queue_Node *Node  = (Queue_Node *)malloc(sizeof(struct Queue_Node));
	if (Node == NULL) exit(1);

	Node->IO_NUM = IO_NUM_V;
	Node->ISO = ISO_V;

	if ((*PTR)->Tail != NULL)
		(*PTR)->Tail->Addr = Node;

	(*PTR)->Tail = Node;

	if ((*PTR)->Head == NULL)
		(*PTR)->Head = Node;
}

struct Queue_Node* Dequeue(Node_PTR **PTR) {
	if ((*PTR)->Head == NULL) exit(1);

	Queue_Node *TMP_NODE = (Queue_Node *)malloc(sizeof(struct Queue_Node));
	Queue_Node *TMP_PTR = (*PTR)->Head;
	(*PTR)->Head = (*PTR)->Head->Addr;

	TMP_NODE->IO_NUM = TMP_PTR->IO_NUM;
	TMP_NODE->ISO = TMP_PTR->ISO;

	free(TMP_PTR);

	if ((*PTR)->Head == NULL)
		(*PTR)->Tail = NULL;

	return TMP_NODE;
}

int main() {
	Node_PTR *Ends = INIT();

	for (char i = 'a'; i != 'z'; i++) {
		Enqueue(&Ends, i, i);
		if (i == 'y')
			Enqueue(&Ends, i + 1, i + 1);
	}
	for (int ii = 0; ii < 26; ii++) {
		Queue_Node *Node = Dequeue(&Ends);
		printf("ISO: %c\t\t\t\tIO_NUM: %d\n", Node->ISO, Node->IO_NUM);
	}
}