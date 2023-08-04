#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Queue {
	char name[50];
	int age;
	struct Queue *NextAddr;
} Queue;

typedef struct Queue_P {
	Queue *LastQ;
	Queue *FirstQ;
} Queue_P;

void QueueList(Queue_P **QL, char names[5][50], int ages[], int length) {
	// Enqueue
	for (int i = 0; i < length; i++) {
		Queue *Node = (Queue *)malloc(sizeof(Queue));
		if (Node == NULL) exit(1);

		strcpy(Node->name, names[i]);
		Node->age = ages[i];

		if ((*QL)->LastQ != NULL)
			(*QL)->LastQ->NextAddr = Node;
		(*QL)->LastQ = Node;

		if ((*QL)->FirstQ == NULL)
			(*QL)->FirstQ = Node;	
	}
	// Dequeue
	for (int i = 0; i < length; i++) {
		if ((*QL)->FirstQ == NULL) return;
		Queue *TEMP = (*QL)->FirstQ;
		printf("%s\t%d\n", TEMP->name, TEMP->age);
		(*QL)->FirstQ = (*QL)->FirstQ->NextAddr;
		if ((*QL)->FirstQ == NULL)
			(*QL)->LastQ = NULL;
		free(TEMP);
	}
}

int main() {
	Queue_P *List = (Queue_P *)malloc(sizeof(Queue_P));
	List->LastQ = NULL;
	List->FirstQ = NULL;

	char names[5][50] = {
		"Shintari Kisaragi",
		"Tsubomi Kido",
		"Shuuya Kano",
		"Marry Kozakura",
		"Kousuke Seto"
	};
	int ages[5] = { 18, 17, 17, 15, 16 };

	QueueList(&List, names, ages, 5);
}
