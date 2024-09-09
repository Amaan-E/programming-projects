//Input a string from the user and display its length without string.h

#include <stdio.h>

int main()
{
	int i; 
	char s[100];

	printf("Enter string: ");
	scanf("%s", &s);
	for(i = 0; s[i] != '\0'; ++i)
	;
	
	printf("Length: %d", i);
}
