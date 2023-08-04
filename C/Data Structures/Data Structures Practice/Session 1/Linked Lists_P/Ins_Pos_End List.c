#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int age, grade;
	float gpa;
	char *name;
	struct Node *next;
} Node;

void Push_Beg(Node **Head, char *Name, int CHAR_SIZE, int Age, int Grade, float GPA) {
	Node *Cum = (Node *)malloc(sizeof(struct Node));
	Cum->name = (char *)malloc(sizeof((CHAR_SIZE * sizeof(char))) + 1);
	strcpy(Cum->name, Name);
	strcat(Cum->name, "\0");

	Cum->age = Age;
	Cum->grade = Grade;
	Cum->gpa = GPA;
	Cum->next = NULL;

	Cum->next = (*Head);
	(*Head) = Cum;
}

void Push_End(Node **Head, char *Name, int CHAR_SIZE, int Age, int Grade, float GPA) {
	Node *Cum = (Node *)malloc(sizeof(struct Node));
	Cum->name = (char *)malloc(sizeof((CHAR_SIZE * sizeof(char))) + 1);
	strcpy(Cum->name, Name);
	strcat(Cum->name, "\0");

	Cum->age = Age;
	Cum->grade = Grade;
	Cum->gpa = GPA;

	Node *temp = (*Head);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = Cum;
}

void Push_Cur(Node **Head, int Offset, char *Name, int CHAR_SIZE, int Age, int Grade, float GPA) {
	Node *Cum = (Node *)malloc(sizeof(struct Node));
	Cum->name = (char *)malloc(sizeof((CHAR_SIZE * sizeof(char))) + 1);
	strcpy(Cum->name, Name);
	strcat(Cum->name, "\0");

	Cum->age = Age;
	Cum->grade = Grade;
	Cum->gpa = GPA;

	Node *TMP = (*Head);
	for (int i = 1; i < Offset; i++)
		TMP = TMP->next;

	Cum->next = TMP->next;
	TMP->next = Cum;
}

int main() {	
	Node *Node_L = (Node *)malloc(sizeof(struct Node));
	Node_L->name = (char *)malloc(sizeof(char) * 20);
	Node_L->age = 18;
	Node_L->grade = 12;
	Node_L->gpa = 3.14;
	strcpy(Node_L->name, "Steven Bills");
	strcat(Node_L->name, "\0");

	Push_Beg(&Node_L, "Ayin Smith", 20, 15, 10, 4.5);
	Push_Beg(&Node_L, "Maunia Moleno", 20, 15, 10, 4.5);
	Push_Beg(&Node_L, "Ralph", 20, 12, 7, 3.41);
	
	Push_End(&Node_L, "Gate Jobs", 20, 69, 100, 10.5);
	Push_Cur(&Node_L, 2, "AAAAAAA", 20, 15, 9, 4.5);

	Node *PTR = Node_L;
	while (PTR != NULL) {
		printf("%s  %d  %d  %.2f\n", PTR->name, PTR->age, PTR->grade, PTR->gpa);
		PTR = PTR->next;
	}
}
