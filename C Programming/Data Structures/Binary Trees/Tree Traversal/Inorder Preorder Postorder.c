#include <stdio.h>
#include <stdlib.h>

typedef struct SubTree {
	int data;
	struct SubTree *left;
	struct SubTree *right;
} SubTree;

void InorderTraversal(SubTree *root) {
	if (root == NULL) return;
	InorderTraversal(root->left);
	printf("%d\n", root->data);
	InorderTraversal(root->right);
}

void PreorderTraversal(SubTree *root) {
	if (root == NULL) return;
	printf("%d\n", root->data);
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

void PostorderTraversal(SubTree *root) {
	if (root == NULL) return;
	PostorderTraversal(root->left);
	PostorderTraversal(root->right);
	printf("%d\n", root->data);
}

int main() {
	SubTree *RootTree = (SubTree *)malloc(sizeof(SubTree));
	SubTree *NODE1 = (SubTree *)malloc(sizeof(SubTree));
	SubTree *NODE2 = (SubTree *)malloc(sizeof(SubTree));
	SubTree *NODE3 = (SubTree *)malloc(sizeof(SubTree));
	SubTree *NODE4 = (SubTree *)malloc(sizeof(SubTree));
	SubTree *NODE5 = (SubTree *)malloc(sizeof(SubTree));

	RootTree->left = NODE1;
	RootTree->right = NODE2;

	NODE1->left = NODE3;
	NODE1->right = NODE4;
	NODE2->left = NODE5;
	NODE2->right = NULL;

	RootTree->data = 0;
	NODE1->data = 1;
	NODE2->data = 2;
	NODE3->data = 3;
	NODE4->data = 4;
	NODE5->data = 5;

	InorderTraversal(RootTree);
	printf("\n\n");
	PreorderTraversal(RootTree);
	printf("\n\n");
	PostorderTraversal(RootTree);
}
