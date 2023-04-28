#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	int ISO_KEY;
	char *ISO_KEY_STRING;
	struct Node *Addr;
} Node;

void Ins_Beg(Node **Root, int ISO_KEY_V, char *ISO_KEY_STRING_V) {
	Node *Node = (struct Node *)malloc(sizeof(struct Node));
	if (Node == NULL) return;
	Node->ISO_KEY_STRING = (char *)malloc((sizeof(char) * 20) + 1);
	if (Node->ISO_KEY_STRING == NULL) return;

	Node->ISO_KEY = ISO_KEY_V;
	Node->ISO_KEY_STRING = ISO_KEY_STRING_V;

	Node->Addr = (*Root);
	(*Root) = Node;
}

void Ins_Pos(Node **Root, int Offset, int ISO_KEY_V, char *ISO_KEY_STRING_V) {
	Node *Node = (struct Node *)malloc(sizeof(struct Node));
	if (Node == NULL) return;
	Node->ISO_KEY_STRING = (char *)malloc((sizeof(char) * 20) + 1);

	Node->ISO_KEY = ISO_KEY_V;
	Node->ISO_KEY_STRING = ISO_KEY_STRING_V;

	struct Node *TEMP = (*Root);
	for (int i = 1; i < Offset; i++)
		TEMP = TEMP->Addr;

	Node->Addr = TEMP->Addr;
	TEMP->Addr = Node;
}

void Del_Pos(Node **Root, int Offset) {
	Node *TEMP = (*Root);
	if (Offset == 1) {
		(*Root) = (*Root)->Addr;
		free(TEMP);
		return;
	} else {
		for (int i = 1; TEMP != NULL && i < Offset - 1; i++)
			TEMP = TEMP->Addr;
	
		Node *Next = TEMP->Addr;
		TEMP->Addr = Next->Addr;
		free(Next);
	}
}

int main() {
	Node *Base = (Node *)malloc(sizeof(struct Node));
	Base->ISO_KEY_STRING = (char *)malloc((sizeof(char) * 20) + 1);
	Base->ISO_KEY = 0xA284987;
	strcpy(Base->ISO_KEY_STRING, "gfysornvudgsdf");
	strcat(Base->ISO_KEY_STRING, "\0");

	Ins_Beg(&Base, 0xF28F52A, "asldkxxxxksdhf");
	Ins_Beg(&Base, 0xB2E4E79, "asldkasdxksdhf");
	Ins_Beg(&Base, 0xA284845, "asldkfxalkscxz");

	Node *PTR = Base;
	while (PTR != NULL) {
		printf("%s %x\n", PTR->ISO_KEY_STRING, PTR->ISO_KEY);
		PTR = PTR->Addr;
	}

	printf("\n");
	Del_Pos(&Base, 3);
	PTR = Base;

	while (PTR != NULL) {
		printf("%s %x\n", PTR->ISO_KEY_STRING, PTR->ISO_KEY);
		PTR = PTR->Addr;
	}
}
