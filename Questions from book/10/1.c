/*
Modify the stack example of Section 10.2 so that it stores characters instead of integers. Next, add a main function that asks the user to enter a series of parentheses and/or braces, then indicates whether or not they're properly nested:

Enter parentheses and/or braces: ((){}{()})
Parentheses/braces are nested properly

Hint: As the program reads characters, have it push each left parenthesis or left brace. When it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a matching parenthesis or brace. (If not, the parentheses/braces aren't nested properly.) When the program reads the new-line character, have it check whether the stack is empty; if so, the parentheses/braces are matched. If the stack isn't empty (or if stack_underflow is ever called), the parentheses/braces aren't matched. If stack_overflow is called, have the program print the message Stack overflow and terminate immediately.
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */ 
#include <stdlib.h>

#define STACK_SIZE 100 

/* external variables */ 
char contents[ STACK_SIZE ]; 
int top = 0; 
	bool nested = true;

void make_empty( void );
bool is_empty( void );
bool is_full( void ); 
void push( char i );
char pop( void );
bool stack_overflow( void );
bool stack_underflow( void );


int main() {
	make_empty();
	
	
	char ch, x;
	
	printf( "Enter parentheses and/or braces: " );
	while ( ( ch = getchar() ) != '\n' ) {
		if ( ch == '(' || ch == '{' ) {
			push( ch );
		} else if ( ch == ')' || ch == '}' ) {
			x = pop();
			if ( x == ')' || x == ')' ) {
				nested = true;
			} else {
				nested = false;
			}	
		}
	}
	
	if ( is_empty() == true ) {
		nested = true;
	}
	
	if ( nested == true ) {
		printf( "Parentheses/braces are nested properly.\n" );
	} else {
		printf( "Parentheses/braces aren't nested properly.\n" );
	}

		
	return 0;
}

void make_empty( void ) { 
	top = 0; 
} 

bool is_empty( void ) { 
	 return top == 0; 
}

bool is_full( void ) { 
	return top == STACK_SIZE; 
} 

void push( char i ) { 
	if ( is_full() ) {
		stack_overflow(); 
	} else { 
		contents[ top++ ] = i; 
	} 
}	

char pop( void ) { 
	if ( is_empty() ) {
		stack_underflow();
		return '\0'; 
	} else {
		return contents[ --top ]; 
	}
} 

bool stack_overflow( void ) {	
	printf( "Stack overflow!" );
	exit( EXIT_FAILURE );
	return true;
}

bool stack_underflow( void ) {
	printf( "Parentheses/braces aren't nested properly.\n" );
	exit( EXIT_FAILURE );
	return true;
}

	











