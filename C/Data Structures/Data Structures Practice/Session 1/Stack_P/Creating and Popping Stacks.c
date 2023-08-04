#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char *name;
    struct Node *next;
} Node;

void Push(Node **Base, char *Name, int CHAR_CAP) {
    Node *Stack_Base = (Node *)malloc(sizeof(struct Node));
    if (Stack_Base == NULL) exit(1);
    Stack_Base->name = (char *)malloc(sizeof(char) * CHAR_CAP);
    if (Stack_Base->name == NULL) exit(2);
    strcpy(Stack_Base->name, Name);
    strcat(Stack_Base->name, "\0");

    Stack_Base->next = (*Base);
    (*Base) = Stack_Base;
}

void Pop(Node **Root) {
    if ((*Root) != NULL) {
        Node *TEMP = (*Root);
        (*Root) = (*Root)->next;
        free(TEMP);
        return;
    } else {
        printf("Stack Empty\n");
    }
}

char* Peek(Node **Root) {
    if (Root != NULL) {
        return (*Root)->name;
    } else {
        printf("Stack Empty");
    }
    return (char *)'a';
}

int main() {
    Node *Base = (Node *)malloc(sizeof(struct Node) * 10);
    Push(&Base, "Raiyan Hossain", 20);
    Push(&Base, "Maunia Monelo", 20);
    Push(&Base, "Ayin Smith", 20);
    Push(&Base, "Abby", 10);
    Push(&Base, "Grandpa", 10);
    Push(&Base, "Steven Bills", 20);
    Push(&Base, "Windows Gates", 20);
    Push(&Base, "AAAAAAAAAAAAAAA", 20);
    Push(&Base, "Maunia Moneloa", 20);
    Push(&Base, "Ayin Smitha", 20);

    for (int i = 0; i < 10; i++) {
        printf("%s\n", Peek(&Base));
        Pop(&Base);
    }
}