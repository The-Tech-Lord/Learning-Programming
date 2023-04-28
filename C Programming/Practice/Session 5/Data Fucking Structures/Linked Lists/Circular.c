#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Circular_Node {
	char name[50];
	int age;
	struct Circular_Node *NextNode;
} Circular_Node;

void Circular_List(Circular_Node **HEAD_REF, char names[5][50], int ages[], int length) {
	static Circular_Node *Tracker;
	for (int i = 0; i < length; i++) {
		Circular_Node *Node = (Circular_Node *)malloc(sizeof(Circular_Node));
		if (Node == NULL) return;

		if ((*HEAD_REF)->NextNode == NULL) {
			(*HEAD_REF)->NextNode = Node;
			Node->NextNode = (*HEAD_REF);
			Tracker = Node;
			printf("%p / %p\n", (*HEAD_REF), (*HEAD_REF)->NextNode);
		} else {
			Node->NextNode = (*HEAD_REF);
			Tracker->NextNode = Node;
			Tracker = Node;
		}

		strcpy(Node->name, names[i]);
		Node->age = ages[i];
		printf("%s / %p / %p\n", Node->name, Node, Node->NextNode);
	}
	Circular_Node *Marker = (*HEAD_REF);
	for (int i = 0; i < length + 1; i++) {
		printf("%s\t%d\t %p / %p\n", Marker->name, Marker->age, Marker, Marker->NextNode);
		Marker = Marker->NextNode;
	}
}

int main() {
	Circular_Node *Head = (Circular_Node *)malloc(sizeof(Circular_Node));
	Head->NextNode = NULL;
	char names[5][50] = {
		"Shintari Kisaragi",
		"Tsubomi Kido",
		"Shuuya Kano",
		"Marry Kozakura",
		"Kousuke Seto"
	};
	int ages[5] = { 18, 17, 17, 15, 16 };
	Circular_List(&Head, names, ages, 5);
	free(Head);
}
