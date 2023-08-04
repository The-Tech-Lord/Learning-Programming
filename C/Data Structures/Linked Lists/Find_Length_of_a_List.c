#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Interative Solution
int count(struct Node** head_ref) {
    int count = 0;
    struct Node* current = (*head_ref);
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Recursive Solution
int recursiveCount(struct Node* head_ref) {
    if (head_ref == NULL) {
        return 0;
    }

    return 1 + recursiveCount(head_ref->next);
}

int main() {
    struct Node* head;
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->data = 7;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    printf("The number of elements in the list is: %d\n", count(&head));
    printf("The number of elements in the list is (Using recursive solution): %d\n", recursiveCount(head));
}