#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void replaceParentheses(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(')
            str[i] = ')';
        else if (str[i] == ')')
            str[i] = '(';
    }
}

void infixToPrefix(char* infix, char* prefix) {
    reverseString(infix);
    replaceParentheses(infix);
    
    char postfix[SIZE];
    infixToPostfix(infix, postfix); // Use the previously defined function
    
    reverseString(postfix);
    
    strcpy(prefix, postfix);
}

int main() {
    char infix[SIZE], prefix[SIZE];
    
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    
    infixToPrefix(infix, prefix);
    
    printf("Prefix expression: %s\n", prefix);
    
    return 0;
}
