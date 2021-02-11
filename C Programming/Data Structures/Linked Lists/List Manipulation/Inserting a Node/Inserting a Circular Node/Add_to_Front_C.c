#include <stdio.h>
#include <stdlib.h>

struct CNode {
    int data;
    struct CNode* next;
};

void push(struct CNode** last_ref, int new_data) {
    struct CNode* new_node = (struct CNode*)malloc(sizeof(struct CNode));
    new_node->data = new_data;

    //What ever the next of what the last pointer was pointing to, the next will point to new_node
    new_node->next = (*last_ref)->next;
    (*last_ref)->next = new_node;
}

int main() {
    struct CNode* last;
    struct CNode* first = (struct CNode*)malloc(sizeof(struct CNode));
    struct CNode* second = (struct CNode*)malloc(sizeof(struct CNode));
    struct CNode* third = (struct CNode*)malloc(sizeof(struct CNode));

    last = third;

    first->next = second;
    first->data = 8;

    second->next = third;
    second->data = 3;

    third->next = first;
    third->data = 9;

    push(&last, 88);

    struct CNode* p;
    p = last;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;

        if (p->data == 3) {
            printf("%d\n", p->data);
            break;
        }
    }
}