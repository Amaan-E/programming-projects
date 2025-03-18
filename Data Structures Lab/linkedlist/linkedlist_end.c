/*
==========================================================================
 Insertion, Deletion at end.
==========================================================================
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
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
	struct node *newNode = malloc( sizeof( struct node ) );
	TestReturn( newNode );
	if ( first == NULL ) {
		first = newNode;
		newNode->next = NULL;
	} else {
		struct node *p;
		for ( p = first; p->next != NULL; p = p->next ) {
			;
		}
		p->next = newNode;
		newNode->next = NULL;
	}
	printf( "\nEnter data: " );
	scanf( "%d", &newNode->data );
}

void Display( void ) {
	printf( "\nLinked list contains: " );
	struct node *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "%d ", p->data );
	}
	printf( "\n" );
}

void Delete( void ) {
	if ( first->next == NULL ) {
		free( first );
		first = NULL;
	} else {
		struct node *cur, *prev;
		for ( cur = first, prev = NULL; cur->next != NULL; prev = cur, cur = cur->next ) {
			;
		}
		prev->next = NULL;
		free( cur );
		printf( "\nDeleted.\n" );
	}
}

void TestReturn( void *p ) {
	if ( p == NULL ) {
		printf( "Memory allocation failed!" );
		exit( EXIT_FAILURE );
	}
}