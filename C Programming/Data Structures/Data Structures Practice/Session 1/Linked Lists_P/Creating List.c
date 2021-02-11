#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char *name;
	int age;
	int grade;
	struct Node *next;
} Node;

void Push_Head(Node **Head, char *Name, int STR_CAP, int age, int grade) {
	Node *node = (Node *)malloc(sizeof(struct Node));
	node->name = (char *)malloc((STR_CAP * sizeof(char)) + 1);
	strcpy(node->name, Name);
	strcat(node->name, "\0");

	node->age = age;
	node->grade = grade;

	node->next = (*Head);
	(*Head) = node;
}

int main() {
	Node *Node_L = (Node *)malloc(sizeof(struct Node));
	Node_L->name = (char *)malloc((20 * sizeof(char)) + 1);
	Node_L->age = 11;
	Node_L->grade = 19;
	strcpy(Node_L->name, "Steven Bills");

	Push_Head(&Node_L, "Raiyan Hossain", 20, 16, 11);
	Push_Head(&Node_L, "Ayin Smith", 20, 15, 10);
	Push_Head(&Node_L, "Maunia Moleno", 20, 15, 10);
	Push_Head(&Node_L, "Ralph", 10, 12, 7);

	Node *PTR = Node_L;
	while (PTR != NULL) {
		printf("%s\n \t%d\n \t%d\n", PTR->name, PTR->age, PTR->grade);
		PTR = PTR->next;
	}
}
