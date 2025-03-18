#include <stdio.h>

#define N 100
int content[N];

int top = 0;

void Push() {
    if (top == N) {
        printf("Stack Overflow");
    } else {
        content[top++] = data;
    }
}

int Pop() {
    if (top <= 0) {
        printf("Stack Underflow!");
        return -1;
    } else {
        top--;
        return content[top];
    }
}

int main() {
    return 0;
}