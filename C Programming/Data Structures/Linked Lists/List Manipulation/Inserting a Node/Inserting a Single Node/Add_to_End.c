#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head;
void append(int x, struct Node** head_ref) {
    struct Node *newNode, *temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = x; //Insert new data into new_node
    newNode->next = NULL; //Doesn't need to point to anything since its at the end
    temp = *head_ref; //Another initialized pointer to traverse to the end

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode; //Will make the element's next equal new_node
}

int main() {
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = first;

    first->data = 5;
    first->next  = second;

    second->data = 3;
    second->next = third;

    third->data = 9;
    third->next = NULL;

    append(87, &head);
    append(23, &head);
    append(67, &head);
    append(40, &head);
    append(10, &head);

    struct Node* p;
    p = head;

    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}