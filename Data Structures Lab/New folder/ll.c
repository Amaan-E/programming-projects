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
    if (first == NULL) {
        printf("Enter data to insert: ");
        scanf("%d", &newNode->data);
        newNode->next = first;
        first = newNode;
    } else {
        printf("Enter after what data to insert: ");
        int n;
        scanf("%d", &n);
        printf("Enter data to insert: ");
        scanf("%d", &newNode->data);
        struct node *cur;
        for (cur = first;
            cur->data != n;
            cur = cur->next) {
            ;
        }
        if (cur->data != n) {
            printf("\nNot Found!\n");
            return;
        } else if (cur->next == NULL ) {
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
