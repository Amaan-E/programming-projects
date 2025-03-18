/*
==========================================================================
	Number of nodes.
==========================================================================
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *first = NULL;

void Count( void );
void CountData( void );
void Delete( void );
void Display( void );
void Insert( void );

int main( void ) {

	for ( ;; ) {
		printf( "\nMenu:\n"
				"1. Insert.\n"
				"2. Display.\n"
				"3. Delete.\n"
				"4. Count.\n"
				"5. Exit.\n"
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
				Count();
				break;
			case 5:
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
	int n;
	
	if ( first == NULL ) {
		first = newNode;
		newNode->next = NULL;
	} else {
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
		} else {
			prev->next = cur->next;
			printf( "\nDeleted.\n" );
		}
		free( cur );
	}
}

void Count( void ) {
	struct node *p;
	int count = 0;
	for ( p = first; p != NULL; p = p->next ) {
		++count;
	}
	printf( "\nNumber of nodes: %d\n", count);
}

void CountData( void ) {
	int n;
	printf( "Enter data which you want to count: " );
	scanf( "%d", &n );
	struct node *p;
	int count = 0;
	for ( p = first; p != NULL; p = p->next ) {
		if ( p->data ) {
			++count;
		}
	}
	printf( "\n%d appears %d times.\n", n, count );
}
