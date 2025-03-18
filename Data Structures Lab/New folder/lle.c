#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *first = NULL;

void Insert();
void Delete();
void Display();

int main() {
    for(;;) {
        printf("Menu:\n"
            "1. Insert.\n"
            "2. Delete.\n"
            "3. Display.\n"
            "4. Exit.\n"
            "Enter: ");
        int c;
        scanf("%d", &c);
        switch (c) {
            case 1: Insert(); break;
            case 2: Delete(); break;
            case 3: Display(); break;
            case 4: return 0; break;
            default: printf("Invalid!\n"); break;
        }
    }

    return 0;
}

void Insert() {
    struct node *newNode = malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &newNode->data);
    if (first == NULL) {
        newNode->next = first;
        first = newNode;
    } else {
        struct node *p;
        for (p = first; p->next != NULL; p = p->next) {
            ;
        }
        p->next = newNode;
        newNode->next = NULL;
    }
}

void Delete() {
    if (first == NULL) {
        return;
    } else if (first->next == NULL) {
        free(first);
        first = NULL;
    } else {
        struct node *prev;
        struct node *cur;
        for (prev = NULL, cur = first;
            cur->next != NULL;
            prev = cur, cur = cur->next) {
            ;
        }
        prev->next = NULL;
        free(cur);
       	printf( "\nDeleted.\n" );
    }
}

void Display() {
    struct node *p;
    for (p = first; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}
