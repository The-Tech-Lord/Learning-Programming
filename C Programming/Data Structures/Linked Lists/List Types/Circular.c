#include <stdio.h>
#include <stdlib.h>

struct CNode {
    int data;
    struct CNode* next;
};

void traverse(struct CNode** head) {
    struct CNode* temp = (struct CNode*)malloc(sizeof(struct CNode));
    temp = (*head);

    //Traverse through the list
    if ((*head) != NULL) {
        do {
            printf("%d\n", temp->data);
            temp = temp->next;
        } while(temp != (*head));
    }
}

int main() {
    struct CNode* last;
    struct CNode* first = (struct CNode*)malloc(sizeof(struct CNode));
    struct CNode* second = (struct CNode*)malloc(sizeof(struct CNode));
    struct CNode* third = (struct CNode*)malloc(sizeof(struct CNode));

    last = third;

    first->next = second;
    first->data = 5;

    second->next = third;
    second->data = 8;

    third->next = first;
    third->data = 0;
    
    traverse(&last);
}