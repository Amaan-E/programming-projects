#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;

void Insert() {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Failure");
        exit(EXIT_FAILURE);
    }
    
    newNode->next = first;
    first = newNode;
}

void InsertE() {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Failure");
        exit(EXIT_FAILURE);
    }
    if (first == NULL) {
        newNode->next = first;
        first = newNode;
    } else {
        struct node *cur;
        for (cur = first; cur->next == NULL; cur = cur->next) {
            ;
        }
        cur->next = newNode;
        printf("Enter data: ");
        int d;
        scanf("%d", &d);
        newNode->data = d;
        newNode->next = NULL;
    }
}

void InsertA() {
    struct node *newNode = malloc(sizeof(struct node));
    printf("Enter data: ");
    int d;
    scanf("%d", &d);
    if (newNode == NULL) {
        printf("Failure");
        exit(EXIT_FAILURE);
    }
    if (first == NULL) {
        newNode->next = first;
        first = newNode;
    } else {
        struct node *cur;
        for (cur = first; cur->data != n; cur = cur->next) {
            ;
        }
        if (cur->next == NULL) {
            cur->next = newNode;
            newNode->data = d;
            newNode->next = NULL;
        } else {
            newNode->next = cur->next;
            newNode->data = d;
            cur->next = newNode;
        }
       
    }
}

void Display() {
    struct node *p;
    for (p = first; p != NULL; p = p->next) {
        printf("%d, ", p->data);
    }
}

void Delete() {
    if (first->next == NULL) {
        free(first);
        return;
    }
    struct node *p = first;
    first = first->next;
    free(p);
}

void DeleteE() {
    if (first == NULL) {
        return;
    } else if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        struct node *cur, *prev;
        for (cur = first, prev = NULL;
            cur->next != NULL;
            prev = cur, cur = cur->next) {
                ;
            }
            free(cur);
            prev->next = NULL;
    }
}

void DeleteA() {
    if (first == NULL) {
        return;
    } else if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        struct node *cur, *prev;
        for (cur = first, prev = NULL;
            cur->data != n;
            prev = cur, cur = cur->next) {
                ;
            }
            if (cur->next == NULL) {
                free(cur);
                prev->next = NULL;
            } else {
                prev->next = cur->next;
                free(cur);
            }
    }
}

int main() {
    return 0;
}