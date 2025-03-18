/*
====================================================================================================
    Program that uses functions to perform the following operations on singly linked list:
        (i)   Creation
        (ii)  Insertion
        (iii) Deletion
        (iv)  Traversal.
====================================================================================================
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *first = NULL;

void Insert();
void Display();
void Delete();

int main() {
    for(;;) {
        printf("Menu:\n"
               "1. Insert.\n"
               "2. Traverse.\n"
               "3. Delete.\n"
               "4. Exit\n"
               "Enter: ");
        int x;
        scanf("%d", &x);
        switch(x) {
            case 1: Insert(); break;
            case 2: Display(); break;
            case 3: Delete(); break;
            case 4: exit(EXIT_SUCCESS);               
        }
    }
    return 0;
}

void Insert() {
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) {
        return;
    }
    
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    
    if (!first) {
        newNode->next = first;
        first = newNode;
    } else {
        printf("Enter after what data: ");
        int n;
        scanf("%d", &n);
        struct node *cur;
        for (cur = first; cur->data != n && cur->next != NULL; cur = cur->next) {
            ;
        }
        if (cur->data != n) {
            printf("Not Found!\n");
            return;
        } else if (cur->next == NULL) {
            cur->next = newNode;
            newNode->next = NULL;
        } else {
            newNode->next = cur->next;
            cur->next = newNode;
        }
    }  
}

void Delete() {
    if (first == NULL) {
        return;
    }
    if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        printf("Enter data to delete: ");
        int x;
        scanf("%d", &x);
        struct node *prev;
        struct node *cur;
        for (prev = NULL, cur = first; 
            cur->data != x && cur->next != NULL; 
            prev = cur, cur = cur ->next) {
            ;
        }
        if (cur->data != x) {
            printf("Not Found!\n");
            return;
        } else if (prev == NULL) {
            prev = cur;
            first = first->next;
            free(prev);
        } else if (cur->next == NULL) {
            free(cur);
            prev->next = NULL;
        } else {
            prev->next = cur->next;
            free(cur);
        }
    } 
    
}

void Display() {
    struct node *p;
    for (p = first; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}