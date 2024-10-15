/*
Write a program that takes a first name and a last name entered by the user and displays the last name,
 a comma, and the first initial, followed by a period:

Enter a first and last name: Lloyd Fosdick
Fodsick, L.
The user's input may contain extra spaces before the first name, between the first and last names, and after the last name.
*/

/*
#include <stdio.h>

int main(void)
{
	printf("Enter a first and last name: ");
	char first_name, last_name;
	
//	while((first_name = getchar()) != ' ')
//	first_name = getchar();
	scanf(" %c", &first_name);

	while((last_name = getchar()) != ' ')
	;

	do{
	putchar(last_name);
	}while((last_name = getchar()) != '\n');
	printf(", %c.", first_name);                                
	
}		
*/


#include <stdio.h>

int main(void) {

    char last_name, first_name;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_name);
    
    while ((last_name = getchar()) != ' ')
        ;

    while ((last_name = getchar()) == ' ')
        ;

    do {
        putchar(last_name);
    } while ((last_name = getchar()) != '\n' && last_name != ' ');

    printf(", %c.\n", first_name);

}