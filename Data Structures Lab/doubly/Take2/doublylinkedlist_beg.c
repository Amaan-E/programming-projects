#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node *first = NULL;

void Insert( void );
void Display( void );
void Delete( void );

int main( void ) {
	for ( ;; ) {
		printf( "\nMenu:\n"
				"1. Insert.\n"
				"2. Display.\n"
				"3. Delete.\n"
				"4. Exit.\n"
				"Enter you choice: " );
		int input;
		scanf( "%d", &input );
		switch ( input ) {
			case 1:
				Insert();
				break;
			case 2:
				Display();
				break;
			case 3:
				Delete();
				break;
			case 4:
				return 0;
				break;
			default:
				printf( "Invalid Input!" );
				break;
		}
	}
	return 0;
}

void Insert( void ) {
	printf( "\n" );
	struct node *newNode = malloc( sizeof( struct node ) );
	if ( first == NULL ) {
		newNode->prev = newNode->next = NULL;
		first = newNode;
	} else {
		newNode->next = first;
		newNode->prev = NULL;	
		first->prev = newNode;
		first = newNode;
	}

	printf( "Enter data: " );
	scanf( "%d", &newNode->data );
	printf( "\n" );
}

void Delete( void ) {
	printf( "\n" );
	// Deletion at beginning.
	if ( first == NULL ) {
		return;
	}
	if ( first->next == NULL ) {
		free( first );
		first = NULL;
	} else {
		struct node *p = first;
		first = first->next;
		first->prev = NULL;
		free( p );
	}
	printf( "\n" );
}

void Display( void ) {
	printf( "\n" );
	struct node *p;
	printf( "Linked list contains: \n" );
	for ( p = first; p != NULL; p = p->next ) {
		printf( "%d -> ", p->data );
	}
	printf( "\n" );
}