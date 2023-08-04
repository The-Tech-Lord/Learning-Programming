#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Full_Tree {
	int data;
	struct Full_Tree *left;
	struct Full_Tree *right;
} Full_Tree;

struct Full_Tree * ChildSupport(int DataVal) {
	Full_Tree *Node = (Full_Tree *)malloc(sizeof(Full_Tree));
	Node->data = DataVal;
	Node->left = Node->right = NULL;
	return Node;
}

// Checks whether or not a Binary Tree is a Full Tree or not
bool WhenFullTreeIsSus(Full_Tree *Root) {
	if (Root == NULL) return true;
	if (Root->left == NULL && Root->right == NULL) return true;
	if ((Root->left) && (Root->right))
		return (WhenFullTreeIsSus(Root->left) && WhenFullTreeIsSus(Root->right));

	return false;
}

int main() {
	Full_Tree *Root = (Full_Tree *)malloc(sizeof(Full_Tree));
	Root->left = ChildSupport(5);
	Root->right = ChildSupport(6);

	Root->left->left = ChildSupport(7);
	Root->left->right = ChildSupport(8);
	Root->right->left = ChildSupport(9);
	Root->right->right = ChildSupport(10);

	if (WhenFullTreeIsSus(Root)) {
		printf("Tree is not sus!");	
		free(Root);
	} else {
		printf("TREE IS SUS VOTE 'EM OUT'!!");
	}
}
