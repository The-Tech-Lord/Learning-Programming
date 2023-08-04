#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insert(struct Node** prev_node, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*prev_node)->next;

    //Make prev_node next equal new_node
    (*prev_node)->next = new_node;
    //Make new_node prev equal prev_node
    new_node->prev = (*prev_node);

    if (new_node->next != NULL) {
        new_node->next->prev = new_node;
    }
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

    insert(&second, 9);

    struct Node* p;
    p = head;

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}