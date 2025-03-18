#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char* postfix) {
    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];
        
        if (isdigit(ch)) { // Operand
            push(ch - '0');
        } else { // Operator
            int b = pop();
            int a = pop();
            
            switch (ch) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push((int)pow(a, b)); break;
            }
        }
    }
    
    return pop(); // Final result
}

int main() {
    char postfix[SIZE];
    
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);
    
    int result = evaluatePostfix(postfix);
    
    printf("Result: %d\n", result);
    
    return 0;
}
