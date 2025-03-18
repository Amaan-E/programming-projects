#include <stdio.h>

#define N 100

int content[N];
int top = 0;
int data;

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
    if (top < N) {
        printf("Enter data: ");
        scanf("%d", &data);
        content[top++] = data;
    } else {
        printf("\nOverflow!\n");
    }
}

void Pop() {
    if(top > 0) {
        printf("\nPopped.\n");
        --top;
    } else {
        printf("\nUnderflow!\n");
    }
}

void Display() {
    for (int i = 0; i < top; i++) {
        printf("%d ", content[i]);
    }
    printf("\n");
}
