#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void delete(struct Node** head_ref, int position) {
    struct Node* temp = (*head_ref);
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    temp = temp->next;
    temp->prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->next = second; //Position 1
    first->prev = NULL;
    first->data = 89;

    second->next = third; //Position 2
    second->prev = first;
    second->data = 45;

    third->next = fourth; //Position 3
    third->prev = second;
    third->data = 67;

    fourth->next = fifth; //Position 4
    fourth->prev = third;
    fourth->data = 34;

    fifth->next = NULL; //Position 5
    fifth->prev = fourth;
    fifth->data = 12;

    delete(&head, 3);
    delete(&head, 2);
    
    struct Node* p;
    p = head;

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}