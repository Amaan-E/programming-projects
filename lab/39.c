//Input a string from the user and display the same
#include <stdio.h>
//#include <string.h>

int main()
{
	char s[100];
	int i;
	
	printf("Enter string: ");
	scanf("%s", &s);
	
	for(i = 0; s[i] != '\0'; i++)
	{
		printf("%c", s[i]);
	}
}
