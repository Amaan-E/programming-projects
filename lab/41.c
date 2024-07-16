//Input a string from the user and display it in reverse

#include <stdio.h>

int main()
{
	int i; 
	char string[100];

	printf("Enter string: ");
	scanf("%s", &string);
	
	for(i = 0; string[i] != '\0'; ++i)
	;
	
	for(i = i - 1; i >= 0; --i)
	{
		printf("%c", string[i]);
	
	}
}
