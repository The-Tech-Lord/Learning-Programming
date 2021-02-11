#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
	char *Name;
	int age, grade;
	float gpa;
	struct Stack *Addr;
} Stack;

void Push(Stack **Node, char *name, int Age, int Grade, float GPA, int CHAR_CAP) {
	Stack *TMP_Node = (Stack *)malloc(sizeof(struct Stack));
	if (TMP_Node == NULL) exit(1);
	TMP_Node->Name = (char *)malloc(sizeof(char) * CHAR_CAP);
	if (TMP_Node->Name == NULL) exit(1);

	TMP_Node->Name = name;
	TMP_Node->age = Age;
	TMP_Node->grade = Grade;
	TMP_Node->gpa = GPA;

	TMP_Node->Addr = (*Node);
	(*Node) = TMP_Node;
}

void Pop(Stack **Node) {
	if ((*Node) == NULL) exit(1);

	Stack *TEMP_PTR = (*Node);
	(*Node) = (*Node)->Addr;
	free(TEMP_PTR);
}

struct Stack* Peek(Stack **Node) {
	if ((*Node) == NULL) {
		printf("Nothing to Peek!!\n");
		exit(1);
	} else {
		return (*Node);
	}
}

int main() {
	Stack *Root = (Stack *)malloc(sizeof(struct Stack));
	Root->Name = (char *)malloc(sizeof(char) * 20);
	Root->Name = "alskjdhflkajsdf";
	Root->age = 18;
	Root->grade = 11;
	Root->gpa = 5;

	Push(&Root, "Raiyan Hossain", 16, 11, 3.55, 20);
	Push(&Root, "Maunia Moleno", 15, 10, 3.55, 20);
	Push(&Root, "Ayin Smith", 15, 10, 3.55, 20);
	Push(&Root, "Steven Bills", 69, 90, 8, 20);
	Push(&Root, "Windows Gates", 79, 45, 9, 20);

	for (int i = 0; i < 7; i++) {
		Stack *TMP = (Stack *)malloc(sizeof(struct Stack));
		TMP = Peek(&Root);
		printf("Name: %s  Age: %d  Grade: %d  GPA: %f\n", TMP->Name, TMP->age, TMP->grade, TMP->gpa);
		Pop(&Root);
	}
}