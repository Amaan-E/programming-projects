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
	// Insertion after anywhere in doubly linked list.
	struct node *newNode = malloc( sizeof( struct node ) );
	if ( first == NULL ) {
		newNode->prev = newNode->next = NULL;
		first = newNode;
	} else {
		printf( "Enter after what to insert: " );
		int n;
		scanf( "%d", &n );
		struct node *p;
		for ( p = first; p->next != NULL && p->data != n; p = p->next ) {
			;
		}
		if ( p->data != n ) {
			printf( "Not found." );
			return;
		}
		if ( p->next == NULL ) {
			p->next = newNode;
			newNode->next = NULL;
			newNode->prev = p;	
		} else {
			newNode->next = p->next;
			newNode->prev = p;
			p->next = newNode;
			p->next->prev = newNode;
		}
	}

	printf( "Enter data: " );
	scanf( "%d", &newNode->data );
}

void Delete( void ) {
	printf( "\n" );

	if ( first == NULL ) {
		return;
	}
	
	if ( first->next == NULL ) {
		free( first );
		first = NULL;
	} else {
		printf( "Enter what to delete: " );
		int n;
		scanf( "%d", &n );
		struct node *p;
		for ( p = first; p != NULL && p->data != n; p = p->next ) {
			;
		}
		if ( p->data != n ) {
			printf( "Not Found!" );
			return;
		}
		if ( p == first ) {
			first = first->next;
			first->prev = NULL;
			free( p );
		} else if ( p->next == NULL ) {
			p->prev->next = NULL;
			free( p );
		} else {
			p->prev->next = p->next;
			p->next->prev = p->prev;
			free( p );
		}
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