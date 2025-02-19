/*
Modify Programming Project 10 from Chapter 7 so that it includes the following function:

int compute_vowel_count(const char *sentence);

The function returns the number of vowels in the string pointed to by the sentence parameter.

 */
/*
Write a program that counts the number of vowels (a, e, i, o and u) in a sentence:

Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/

#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main()
{	
	
	char c[50 + 1];
	printf("Enter a sentence: ");
	char *p = c;
	while( ( *p++ = getchar()) != '\n' && p < c + 51)
	;
	printf("Your sentence contains %d vowels.\n", compute_vowel_count(c));

}

int compute_vowel_count(const char *sentence){
	
	int len = 0;
	char vowels[] = "AEIOU";
	
	int i = 0;    
    while(*sentence)
	{
		while(i < 5) {
			if (toupper(*sentence) == vowels[i++])
			len++;
		}
		i = 0;
		sentence++;	
	}
	    
/*	
	int len = 0;
	
	while(*sentence)
	{
		if (toupper(*sentence) == 'A')
			len++;
		else if (toupper(*sentence) == 'E')
			len++;
		else if (toupper(*sentence) == 'I')
			len++;
		else if (toupper(*sentence) == 'O')
			len++;
		else if (toupper(*sentence) == 'U')
			len++;
			
		sentence++;	
	}
*/	
	return len;
}
