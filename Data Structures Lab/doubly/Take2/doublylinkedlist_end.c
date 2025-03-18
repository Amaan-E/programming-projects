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
void TestReturn( void *p );

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
	// Insertion at end of doubly linked list.
	struct node *newNode = malloc( sizeof( struct node ) );
	TestReturn( newNode );
	printf( "Enter data: " );
	scanf( "%d", &newNode->data );
	if ( first == NULL ) {
		newNode->prev = newNode->next = NULL;
		first = newNode;
	} else {
		struct node *p;
		for ( p = first; p->next != NULL; p = p->next ) {
			;
		}
		p->next = newNode;
		newNode->next = NULL;
		newNode->prev = p;	
	}
}

void Delete( void ) {
	if ( first == NULL ) {
		return;
	}
	if ( first->next == NULL ) {
		free( first );
		first = NULL;
	} else {
		struct node *p;
		for ( p = first; p->next != NULL; p = p->next ) {
			;
		}
		p->prev->next = NULL;
		free( p );
	}
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

void TestReturn( void *p ) {
	if ( p == NULL ) {
		printf( "Memory Full!" );
		exit( EXIT_FAILURE );
	}
}