#include <stdio.h>

int main() {
    char a[100];
    int i, j, flag = 1;

    printf("Enter the string: \n");
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++);
    i--; 
    j = 0;
    while (j < i) {
        if (a[j] != a[i]) {
            printf("The string is not a palindrome\n");
            flag = 0;
            break;
        }
        j++;
        i--;
    }

    if (flag) {
        printf("The string is a palindrome\n");
    }

    return 0;
}
