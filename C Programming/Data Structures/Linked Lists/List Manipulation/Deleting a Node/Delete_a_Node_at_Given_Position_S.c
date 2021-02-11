#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void delete(struct Node** head_ref, int position) {
    struct Node* temp = (*head_ref);

    //Used to find the previous node of the node to be deleted
    if (position == 1) {
        (*head_ref) = (*head_ref)->next;
    } else {
        //Finds previous node of the node to be deleted
        for (int i = 1; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }
    }
    //Fixes link
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->data = 6;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 9;
    fifth->next = NULL;

    delete(&head, 1);

    struct Node* p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}