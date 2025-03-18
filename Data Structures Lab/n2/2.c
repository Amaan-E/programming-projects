#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *prev;
  struct node *next;
  int data;
};

struct node *first = NULL;
struct node *last = NULL;
void Insert() {
    struct node *newNode = malloc(sizeof(struct node));
    if (first == NULL) {
        newNode->next = NULL;
        newNode->prev = NULL;
        first = last = newNode;
    } else {
        newNode->next = first;
        newNode->prev = NULL;
        first->prev = newNode;
        first = newNode;
    }
    
}

int main() {
    return 0;
}