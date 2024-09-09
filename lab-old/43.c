//use strlen strcpy strrev strcat strcmp
#include <stdio.h>
#include <string.h>

int main() {
    char string_1[100] = "Hello ";
    char string_2[50] = "World";
    strcat(string_1, string_2); 
    printf("Concatenated string: %s\n", string_1);
	
	char a[100], b[100];
    printf("Enter a string: ");
    scanf("%s", a);
    strcpy(b, a);
    printf("Original String: %s\n", a);
    printf("Copied string: %s\n", b);

    int length = strlen(a);
    printf("The length of the string '%s' is: %d\n", a, length);

    printf("Reversed string: %s\n", strrev(a));
	
    return 0;
}
