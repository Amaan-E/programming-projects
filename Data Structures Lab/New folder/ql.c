#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void Enqueue();
void Dequeue();
void Display();

int main() {
    for(;;) {
        printf("Menu:\n"
            "1. Enqueue.\n"
            "2. Dequeue.\n"
            "3. Display.\n"
            "4. Exit.\n"
            "Enter: ");
        int x;
        scanf("%d", &x);
        switch (x) {
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: Display(); break;
            case 4: return 0; break;
            default: printf("\nInvalid!\n"); break;
        }
    }
}

void Enqueue() {
    struct node *newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Overflow!\n");
    } else {
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        rear = newNode;
        newNode->next = NULL;
       	if ( front == NULL ) {
			newNode->next = front;
			front = rear = newNode;
		} else {
			rear->next = newNode;
			rear = newNode;
		}
    }
}

void Dequeue() {
    if (front == NULL) {
        printf("Underflow!\n");
        front = rear = NULL;
    } else {
        struct node *p = front;
        front = front->next;
        free(p);
        printf("\nDone.\n");
    }
}

void Display() {
    for (struct node *p = front; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}
