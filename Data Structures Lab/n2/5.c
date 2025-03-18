#include <stdio.h>

#define N 100

int content[N];
int front = 0, rear = 0;

void Enqueue() {
    if (rear == N ) {
        printf("overflow");
    } else {
        content[rear++] = data;
    }
}

void Dequeue() {
    if (front == rear) {
        printf("Underflow");
        // Reset is uneccessary
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void Display() {
    for (int i = front; i < rear; i++) {
        printf("%d ", content[i]);
    }
}

int main() {
    return 0;
}
