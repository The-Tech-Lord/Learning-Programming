#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = (*head_ref);

    new_node->data = new_data;
    new_node->next = NULL;

    //Traverse till last node
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node = last;
}

int main() {
    struct Node* head;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->data = 7;
    first->next = second;
    first->prev = NULL;

    second->data = 3;
    second->next = third;
    second->prev = first;

    third->data = 5;
    third->next = NULL;
    third->prev = second;

    append(&head, 34);

    struct Node* p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}