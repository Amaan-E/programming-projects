#include <stdio.h>

#define N 100

int contents[N];
int front = 0;
int rear = 0;

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
    if (rear > N) {
        printf("Overflow!\n");
    } else {
        int n;
        printf("Enter data: ");
        scanf("%d", &n);
        contents[rear++] = n;
    }
}

void Dequeue() {
    if (front < 0) {
        printf("Underflow!\n");
        front = rear = -1;
    } else {
        ++front;
        printf("\nDone\n");
    }
}

void Display() {
    for (int *p = contents + front; p < contents + rear; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}
