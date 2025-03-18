#include <stdio.h>
#include <stdlib.h>

#define N 10

struct content {
    int data;
    struct content *next;
};
struct content *top = NULL;

void Push(int data);
_Bool Overflow(void *p);
int Pop();
_Bool Underflow();

int main() {
    for(;;) {
        printf("Menu:\n"
            "1. Push.\n"
            "2. Pop.\n"
            "4. Exit.\n"
            "Enter: ");
        int n;
        scanf("%d", &n);
        switch (n) {
            case 1: printf("Enter data: "); int d; scanf("%d", &d); Push(d); break;
            case 2: int x = Pop();
            x == -1? : printf("Popped %d.\n", x); break;
            case 4: return 0;   
        }
    }
}

void Push(int data) {
    struct content *new = malloc(sizeof(struct content));
    if(Overflow(new)) {
        printf("Overflow!\n");
        return;
    }
    new->data = data;
    new->next = top;
    top = new;
}

int Pop() {
    if (Underflow()) {
        printf("Underflow!\n");
        return -1;
    } 
    int x = top->data;
    struct content *p = top;
    top = top->next;
    free(p);
    return x;
}

_Bool Overflow(void *p) {
    return p == NULL;
}

_Bool Underflow() {
    return top == NULL;
}