#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char name[50];
	int age;
	struct Node *NextNode;
} Node;

void List(Node **HEAD_REF, char name[5][50], int age[], int length_of_array) {
	for (int i = 0; i < length_of_array; i++) {
		Node *PTR = (Node *)malloc(sizeof(Node));
		if (PTR == NULL)
			return;
		
		Node *Traverse = (*HEAD_REF);
		while (Traverse->NextNode != NULL)
			Traverse = Traverse->NextNode;
		
		Traverse->NextNode = PTR;
		strcpy(PTR->name, name[i]);
		PTR->age = age[i];
	}
	Node *Traverse_Loop = (*HEAD_REF);
	while (Traverse_Loop != NULL) {
		printf("%s\t%d\n", Traverse_Loop->name, Traverse_Loop->age);
		Traverse_Loop = Traverse_Loop->NextNode;
	}
}

int main() {
	Node *Head = (Node *)malloc(sizeof(Node));
	Head->NextNode = NULL;
	char names[5][50] = {
		"Shintari Kisaragi",
		"Tsubomi Kido",
		"Shuuya Kano",
		"Marry Kozakura",
		"Kousuke Seto"
	};
	int ages[5] = { 18, 17, 17, 15, 16 };
	List(&Head, names, ages, 5);
	free(Head);
}
