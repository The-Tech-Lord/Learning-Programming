#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char *name;
	struct Node *next;
} Node;

void Push_Beg(Node **Head, char *Name, int CHAR_SIZE) {
	Node *Crack = (Node *)malloc((sizeof(struct Node)));
	Crack->name = (char *)malloc((sizeof(char) * CHAR_SIZE) + 1);
	strcpy(Crack->name, Name);
	strcat(Crack->name, "\0");

	Crack->next = (*Head);
	(*Head) = Crack;
}

void Delete(Node **Head, int Offset) {
	Node *Temp = (*Head);

	if (Offset == 1) {
		(*Head) = (*Head)->next;
		free(Temp);
		return;
	} else {
		for (int i = 1; Temp != NULL && i < Offset - 1; i++)
			Temp = Temp->next;

		Node *Next = Temp->next;
		Temp->next = Next->next;
		free(Next);
		return;
	}
}

int main() {
	Node *Node_L = (Node *)malloc(sizeof(struct Node));
	Node_L->name = (char *)malloc((sizeof(char) * 20) + 1);
	strcpy(Node_L->name, "Tsubomi Kido"); strcat(Node_L->name, "\0");

	Push_Beg(&Node_L, "Shuuya Kano", 20);
	Push_Beg(&Node_L, "Kousuke Seto", 20);
	Push_Beg(&Node_L, "Marry Kozakura", 20);
	Push_Beg(&Node_L, "Shintaro Kisaragi", 20);
	Push_Beg(&Node_L, "Ene", 5);

	Node *PTR = Node_L;
	while (PTR != NULL) {
		printf("%s\n", PTR->name);
		PTR = PTR->next;
	}

	printf("\n");
	Delete(&Node_L, 1);
	PTR = Node_L;

	while (PTR != NULL) {
		printf("%s\n", PTR->name);
		PTR = PTR->next;
	}
}
