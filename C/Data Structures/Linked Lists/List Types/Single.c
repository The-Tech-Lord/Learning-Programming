#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* tail = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = tail;

    tail->data = 8;
    tail->next = NULL;

    struct Node* p;
    p = head;
    while (p != NULL) {
        printf("%d", p->data);
        p = p->next;
    }
}
