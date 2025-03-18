#include <stdio.h>

#define N 10

int content[N];
int  top = 0;

void Push(int data);
_Bool Overflow();
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
            case 2: int x = Pop(); x == -1? : printf("Popped %d.\n", x); break;
            case 4: return 0;   
        }
    }
}

void Push(int data) {
    if (Overflow()) {
        printf("Overflow\n");
    } else {
        content[++top] = data;
    }
}

int Pop() {
    if (Underflow()) {
        printf("Underflow\n");
        return -1;
    } else {
        return content[top--];
    }
}

_Bool Overflow() {
    return top == N;
}

_Bool Underflow() {
    return top == 0;
}