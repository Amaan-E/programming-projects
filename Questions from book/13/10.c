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

/*
Modify Programming Project 11 from Chapter 7 so that it includes the following function:

void reverse_name(char *name);

The function expects name to point to a string containing a first name followed by a last name. It modifies the string so that the last name comes first, followed by a comma, a space, the first initial and a period. The original string may contain extra spaces before the first name, between the first and last names and after the last name.
*/

#include <stdio.h>
#include <string.h>

#define N 50
void reverse_name(char *name);

int main() {
	char name[N+1];
    printf("Enter a first and last name: ");
	char *q = name;
	char ch;
	while ((ch = getchar()) != '\n') {
			if (q < name + (N + 1))
				*q++ = ch; 
			*q = '\0'; 
		}
	reverse_name(name);
    printf("%s.", name);

	return 0;
}

/*
======================================
The function expects name to point to a string containing a first name followed by a last name. It modifies the string so that the last name comes first, followed by a comma, a space, the first initial and a period. The original string may contain extra spaces before the first name, between the first and last names and after the last name.
======================================
*/
void reverse_name(char *name) {
	char *p = name;
	char last_name[30];
	char first_name[3] = {*name};
	while(*p++ != ' ')
	;
	char *q = last_name;
	while(*p)
		*q++ = *p++;
	
	strcat(last_name, ", ");
	strcat(last_name, first_name);
	strcpy(name, last_name);
}
