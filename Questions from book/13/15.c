/*
Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical expressions known as Reverse Polish Notation (RPN). In this notation, operators are placed after their operands instead of between their operands. For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands in an expression from left to right, performing the following actions:

    When an operand is encountered, push it onto the stack.
    When an operator is encountered, pop its operands from the stack, perform the operation on those operands and then push the result onto the stack.

Write a program that evaluates RPN expressions. The operands will be single-digit integers, The operators are +, -, *, /, and =. The = operator causes the top stack item to be displayed; afterwards, the stack is cleared and the user is prompted to enter another expression. The process continues until the user enters a character that is not an operator or operand:

Enter an RPN expression: 1 2 3 * + =
Value of expression: 7
Enter an RPN expression: 5 8 * 4 9 - / =
Value of expression: -8
Enter an RPN expression: q

If the stack overflows, the program will display the message Expression is too complex and terminate. If the stack underflows (because of an expression such as 1 2 + +), the program will display the message Not enough operands in expression and terminate. Hints: Incorporate the stack code from Section 10.2 into your program. Use scanf(" %c", &ch) to read the operators and operands. 
 */
 
/*
Modify Programming Project 6 from Chapter 10 so that it includes the following function:

int evaluate_RPN_expression(const char *expression);

The function returns the value of the RPN expression pointed to by expression.
*/

#include <stdio.h>
#include <stdbool.h> /* C99 only */ 
#include <stdlib.h>

#define STACK_SIZE 100 


/* external variables */ 
int contents[ STACK_SIZE ]; 
int top = 0; 

void make_empty( void );
bool is_empty( void );
bool is_full( void ); 
void push( int i );
int pop( void );
void stack_overflow( void );
void stack_underflow( void );

int evaluate_RPN_expression(const char *expression);

int main() {
	make_empty();
	
	char expression[ STACK_SIZE + 1 ];

	int ch, i = 0;
	for( ;; ) {
		printf( "Enter an RPN expression: " ); 
		while ( ( ch = getchar() ) != '\n' ) {
			if ( i < STACK_SIZE + 1 ) {
				expression[ i++ ] = ch; 
			}
			expression[ i ] = '\0'; 
		}
		printf( "Value of expression: %d\n", evaluate_RPN_expression( expression ) );
		make_empty();
		i = 0;
		while( *expression ) {
			expression[ i++ ] = '\0';
		}
		i = 0;
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

void push( int i ) { 
	if ( is_full() ) {
		stack_overflow(); 
	} else { 
		contents[ top++ ] = i; 
	} 
}	

int pop( void ) { 
	if ( is_empty() ) {
		stack_underflow();
		return '\0'; 
	} else {
		return contents[ --top ]; 
	}
} 

void stack_overflow( void ) {	
	printf( "Expression is too complex!" );
	exit( EXIT_FAILURE );
}

void stack_underflow( void ) {
	printf( "Not enough operands in expression.\n" );
	exit( EXIT_FAILURE );
}

int evaluate_RPN_expression(const char *expression){
	char x, y;

	while( *expression ) {
		switch ( *expression ) {
			case '0':	case '1':	case '2':	case '3':	case '4':	
			case '5':	case '6':	case '7':	case '8':	case '9':	
				push( *expression - '0' ); 
				break;
			case ' ':
				break;
			case '*':	
				y = pop();
				x = pop();
				push( x * y );	
				break;
			case '/':
				y = pop();
				x = pop();
				push( x / y );	
				break;
			case '+':	
				y = pop();
				x = pop();
				push( x + y );	
				break;
			case '-':	
				y = pop();
				x = pop();
				push( x - y );	
				break;
			case '=':	
				return pop();
				break;
			default:  
				exit(EXIT_SUCCESS);
		}
		expression++;
	}
	return pop();
}
