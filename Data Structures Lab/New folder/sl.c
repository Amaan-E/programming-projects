#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;

void Push();
void Pop();
void Display();

int main() {
    for(;;) {
        printf("Enter:\n"
               "1. Push.\n"
               "2. Pop.\n"
               "3. Display.\n"
               "4. Exit.\n"
               "Enter choice: ");
        int x;
        scanf("%d", &x);
        switch(x) {
            case 1: Push(); break;
            case 2: Pop(); break;
            case 3: Display(); break;
            case 4: return 0; break;
            default: printf("\nInvalid!\n");
        }
    }
}

void Push() {
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) {
        printf("Overflow!\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->next = top;
    top = newNode;
}

void Pop() {
    if (top == NULL) {
        printf("Underflow!\n");
        return;
    }
    struct node *p = top;
    top = top->next;
    free(p);
}

void Display() {
    struct node *p;
    for (p = top; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}
