/*
Write a program that counts the number of vowels (a, e, i, o and u) in a sentence:

Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int len = 0;
	int sentence;
	
	printf("Enter a sentence: ");
	
	while((sentence = getchar()) != '\n')
	{
		sentence = toupper(sentence);
		
		if (sentence == 'A')
			len++;
		else if (sentence == 'E')
			len++;
		else if (sentence == 'I')
			len++;
		else if (sentence == 'O')
			len++;
		else if (sentence == 'U')
			len++;

	}
	
	printf("Your sentence contains %d vowels.\n", len);

}