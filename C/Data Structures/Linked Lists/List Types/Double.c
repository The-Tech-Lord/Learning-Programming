#include <stdio.h>
#include <stdlib.h>

struct DoubleLink {
    int data;
    struct DoubleLink *next;
    struct DoubleLink *prev;
};

int main() {
    struct DoubleLink *head;
    struct DoubleLink *first;
    struct DoubleLink *second;
    struct DoubleLink *third;
    struct DoubleLink *tail;

    head = (struct DoubleLink*)malloc(sizeof(struct DoubleLink));
    first = (struct DoubleLink*)malloc(sizeof(struct DoubleLink));
    second = (struct DoubleLink*)malloc(sizeof(struct DoubleLink));
    third = (struct DoubleLink*)malloc(sizeof(struct DoubleLink));
    tail = (struct DoubleLink*)malloc(sizeof(struct DoubleLink));

    head->data = 6;
    head->next = first;
    head->prev = NULL;

    first->data = 5;
    first->next = second;
    first->prev = first;

    second->data = 9;
    second->next = third;
    second->prev = second;

    third->data = 3;
    third->next = tail;
    third->prev = third;

    tail->next = NULL;
    tail->prev = third;

    struct DoubleLink *p;
    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}