#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *first = NULL;
struct node *last = NULL;

void Insert() {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = d;
    if (first == NULL) {
        newNode->next = first;
        newNode->prev = NULL;
        first = last = newNode;
    } else {
        newNode->next = first;
        newNode->prev = NULL;
        first->prev = newNode;
        first = newNode;
    }
}

void InsertE() {
   	struct node *newNode = malloc( sizeof( struct node ) );
    if (first == NULL) {
        first->next = newNode;
        first = last = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    } else {
        newNode->next = NULL;
        newNode->prev = last;
        last->next = newNode;
        last = newNode;    
    }
    newNode->data = d;
}

void InsertA() {
    struct node *newNode = malloc(sizeof(struct node));
    if (first == NULL) {
        newNode->next = newNode->prev = NULL;
        first = last = newNode;
    } else {
        // Enter what to find and store.
        struct node *cur;
        for (cur = first; cur->data != n && cur != last; cur = cur->next) {
            ;
        }
        // Not found
        if (cur->next == NULL) {
            newNode->next = NULL;
            newNode->prev = cur;
            newNode->data = d;
            last = newNode;
        } else {
            cur->next = newNode;
            newNode->next = cur->next;
            newNode->prev = cur;
        }
    }
}

void DeleteA() {
    if (first == NULL) {
        return;
    } else if (first == last) {
        free(first);
        free(last);
    } else {
        struct node *cur;
        for (cur = first; cur != n && cur != last; cur = cur->next) {
            ;
        }
        // Not Found
        if (cur == first) {
            first = first->next;
            free(cur);
        } else if (cur == last) {
            last = last->prev;
            last->next = NULL;
            free(cur);
        } else {
            cur->prev->next = cur->next;
            cur->next->prev = cur->prev;
            free(cur);
        }
    }
}

void Delete() {
    if (first == NULL) {
        return;
    } else if (first == last) {
        free(first);
        free(last);
    } else {
        struct node *p = first;
        first = first->next;
        first->prev = NULL;
        free(p);
    }
}

void DeleteE() {
    if (first == NULL) {
        return;
    } else if (first == last) {
        free(first);
        free(last);
    } else {
        struct node *p = last;
        last = last->prev;
        last->next = NULL;
        free(p);
    }
}

void Display() {
    struct node *cur;
    for (cur = first; cur != last; cur = cur->next) {
        printf("%d ", cur->data);
    }
}

int main() {
    return 0;
}