#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** prev_node, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*prev_node)->next; //Makes the new_node points to whatever the previous node was pointing to
    (*prev_node)->next = new_node; //The previous's next now equals the new_nodes
}

int main() {
    struct Node* head;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;
    first->data = 5;
    first->next = second;

    second->data = 3;
    second->next = third;

    insert(&second, 8);

    third->data = 7;
    third->next = NULL;

    struct Node* p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}