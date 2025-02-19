/*
Project 5.11

Write a program that asks the user for a two-digit number, then prints the English word for the number:

Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the first digit ("twenty," "thirty," and so forth). Use a second switch statement to print the word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment.
 */
 
/*
Modify Programming Project 11 from Chapter 5 so that it uses arrays containing pointers to strings instead of switch tatements. For example, instead of using a switch statement to print the words for the first digit, use the digit as an index into an array that contains the strings "twenty", "thirty" and so forth.
*/

#include <stdio.h>

int main() {

    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    
    char *numbers[] = { "one", "two", "three", "four", "five",
						"six", "seven", "eight", "nine", "ten", 
						"eleven", "twelve", "thirteen", "fourteen", 
						"fifteen", "sixteen", "seventeen", "eighteen", "nineteen", 
						"twenty", "thirty", "forty", "fifty", "sixty", 
						"seventy", "eighty", "ninty" };     
	
	if ( n >= 10 && n <= 20 ) {
		printf( "You entered the number %s", numbers[ n - 1 ] );
	} else if ( n / 10 >= 1 && n / 10 <= 9 ) {
		printf( "You entered the number %s", numbers[ 17 + n / 10 ] );
		if ( n % 10 >= 1 && n % 10 <= 9 ) {
			printf( "-%s", numbers[ ( n % 10 ) - 1 ] );		
		}
	}
	
	printf( "." );
	return 0;
}
