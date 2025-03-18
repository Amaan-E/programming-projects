/*
==========================================================================
 Insertion, Deletion anywhere.
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

	if ( first == NULL ) {
		first = newNode;
		newNode->next = NULL;
	} else {
		int n;
		printf( "Enter after what data to insert: " );
		scanf( "%d", &n );
		struct node *cur;
		for ( cur = first;
			  cur->data != n && cur->next != NULL;
			  cur = cur->next ) {
			;
		}
		if ( cur->data != n ) {
			printf( "\nNot found!\n" );
			return;
		}
		if ( first->next == NULL ) {
			newNode->next = NULL;
			cur->next = newNode;
		} else if ( cur->next == NULL ) {
			cur->next = newNode;
			newNode->next = NULL;
		} else {
			newNode->next = cur->next;
			cur->next = newNode;
		}
	}
	printf( "\nEnter data: " );
	scanf( "%d", &newNode->data );
}

void Display( void ) {
	printf( "\nLinked list contains: " );
	struct node *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "%d -> ", p->data );
	}
	printf( "\n" );
}

void Delete( void ) {
	if ( first == NULL ) {
		return;
	}
	int n;
	printf( "Enter data to delete: " );
	scanf( "%d", &n );
	if ( first->data == n ) {
		struct node *p = first;
		first = first->next;
		free( p );
	} else {
		struct node *cur, *prev;
		for ( cur = first, prev = NULL; 
			  cur->data != n && cur->next != NULL; 
			  prev = cur, cur = cur->next ) {
			;
		}
		if ( cur->data != n ) {
			printf( "\nDate to delete could not be found.\n" );
			return;
		} else {
			prev->next = cur->next;
			printf( "\nDeleted.\n" );
		}
		free( cur );
	}
}

