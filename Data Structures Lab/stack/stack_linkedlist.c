#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> 


struct node {
	int data;
	struct node *next;
};
struct node *top = NULL;

bool Push( void );
bool Pop( void );
void Display( void );

int main() {
	for ( ;; ) {
		printf( "Menu:\n"
				"1. Push.\n"
				"2. Pop.\n"
				"3. Display\n"
				"4. Exit\n"
				"Enter your choice: " );
		int input;
		scanf( "%d", &input );
		switch ( input ) {
			case 1: 
				if ( Push() ) {
					;
				} else {
					printf( "Overflow!" );
				}
				break;
			case 2:
				if ( Pop() ) {
					;
				} else {
					printf( "Underflow!" );
				}
				break;
			case 3:
				Display();
				break;
			case 4:
				return 0;
				break;
			default:
				printf( "Invalid choice!" );
				break;
		}
	}

	return 0;
}

bool Push( void ) {
	struct node *newNode = malloc( sizeof( struct node ) );
	if ( !newNode ) {
		return false;
	}
	printf( "Enter data: " );
	scanf( "%d", &newNode->data );
	newNode->next = top;
	top = newNode;
	return true;
}

bool Pop( void ) {
	if ( top == NULL ) {
		return false;
	} else {
		struct node *p = top;
		top = top->next;
		free( p );
	}
	return true;
}

void Display( void ) {
	printf( "\nStack: " );
	struct node *p;
	for ( p = top; p != NULL; p = p->next ) {
		printf( "%d, ", p->data );
	}
	printf( "\n" );
}