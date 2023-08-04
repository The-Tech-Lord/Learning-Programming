#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;
}

int main() {
    struct Node* head;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->next = second;
    first->prev = head;
    first->data = 6;

    second->next = third;
    second->prev = first;
    second->data = 3;

    third->next = NULL;
    third->prev = second;
    third->data = 8;

    push(&head, 8);

    struct Node* p;
    p = head;

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}