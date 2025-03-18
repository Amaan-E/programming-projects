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

    newNode->next = first;
    first = newNode;
}

void Display() {
    struct node *p;
    for (p = first; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}

void Delete() {
    struct node *p = first;
    first = first->next;
    free(p);

   	printf( "\nDeleted.\n" );
}
