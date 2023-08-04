#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Double_Node {
	char name[50];
	int age;
	struct Double_Node *NextNode;
	struct Double_Node *PrevNode;
} Double_Node;

void Double_List(Double_Node **HEAD_REF, char names[5][50], int ages[], int length) {
	// I wanted to do this since I thought it would be better if I specified how long you want the list
	// and then you just put the data you want into the parameters instead of putting them in manually
	for (int i = 0; i < length; i++) {
		Double_Node *Node = (Double_Node *)malloc(sizeof(Double_Node));
		if (Node == NULL) return;
		
		Double_Node *Traverse = (*HEAD_REF);
		while (Traverse->NextNode != NULL)
			Traverse = Traverse->NextNode;

		Traverse->NextNode = Node;
		Node->PrevNode = Traverse;
		
		strcpy(Node->name, names[i]);
		Node->age = ages[i];
	}
	Double_Node *TRAVERSE = (*HEAD_REF);
	while (TRAVERSE != NULL) {
		printf("%s\t%d\t%p / %p / %p\n", TRAVERSE->name, TRAVERSE->age, TRAVERSE->PrevNode, TRAVERSE, TRAVERSE->NextNode);
		TRAVERSE = TRAVERSE->NextNode;
	}
	printf("\n\n");

	TRAVERSE = (*HEAD_REF);
	// Retraverses the list so that I can go backwards
	while (TRAVERSE != NULL) {
		if (TRAVERSE->NextNode == NULL)
			break;
		TRAVERSE = TRAVERSE->NextNode;
	}

	while (TRAVERSE != NULL) {
		printf("%s\t%d\t%p / %p / %p\n", TRAVERSE->name, TRAVERSE->age, TRAVERSE->PrevNode, TRAVERSE, TRAVERSE->NextNode);
		TRAVERSE = TRAVERSE->PrevNode;
	}
}

int main() {
	char names[5][50] = {
		"Shintari Kisaragi",
		"Tsubomi Kido",
		"Shuuya Kano",
		"Marry Kozakura",
		"Kousuke Seto"
	};
	int ages[5] = { 18, 17, 17, 15, 16 };
	
	Double_Node *Head = (Double_Node *)malloc(sizeof(Double_Node));
	Head->NextNode = Head->PrevNode = NULL;
	
	Double_List(&Head, names, ages, 5);
	free(Head);
}
