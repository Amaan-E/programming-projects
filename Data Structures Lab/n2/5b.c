#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void Enqueue() {
    struct node *newNode = malloc(sizeof(struct node));
    // Overflow
    if (front == NULL) {
        newNode->next = front;
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Dequeue() {
    if (front == rear) {
        // Underflow
    } else {
        struct node *p = front;
        front = front->next;
        free(p);
    }
}

int main() {
    return 0;
}