#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head;
void push(int x, struct Node** head_ref) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x; //New data
    new_node->next = (*head_ref); //Connects the new_node to what beginning of the node
    (*head_ref) = new_node; //The head now points to the new node
}

int main() {
    struct Node *first = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    head = first; //Its important to declare the head!!

    first->data = 6;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    push(5, &head);
    push(7, &head);
    push(2, &head);
    push(2, &head);
    push(2, &head);
    
    struct Node* p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}