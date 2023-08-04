#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* last;
void insert(struct Node** p, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp;
    new_node->data = data;
    new_node->next = (*p)->next;
    (*p)->next = new_node;
}

void traverse(struct Node** head) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = (*head);

    //Traverse through the list
    if ((*head) != NULL) {
        do {
            printf("%d\n", temp->data);
            temp = temp->next;
        } while(temp != (*head));
    }
}

int main(void) {
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    last = third;

    first->data = 8;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data = 3;
    third->next = first;

    insert(&second, 99);

    struct Node* p2;
    p2 = last;

    traverse(&last);
}