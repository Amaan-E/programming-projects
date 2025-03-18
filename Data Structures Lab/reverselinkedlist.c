/*
==================================================================
reverselinkedlist
	Insertion anywhere, Deletion anywhere & Reverse - Linked List
==================================================================
*/
#include <stdio.h>
#include <stdlib.h>

struct node_t {
	int			   data;
	struct node_t *next;
};

struct node_t *first = NULL;

void Insert( void );
void Display( void );
void Delete( void );
void Reverse( void );

int main( void ) {
	for ( ;; ) {
		printf( "\nMenu:\n"
				"1. Insert.\n"
				"2. Display.\n"
				"3. Delete.\n"
				"4. Reverse.\n"
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
				Reverse();
				break;
			case 5:
				return 0;
			default:
				printf( "Invalid Input!" );
				break;
		}
	}

	return 0;
}

/*
===========================================
Insert

	Inserts a new node in the linked list
===========================================
*/
void Insert( void ) {
	struct node_t *newNode = malloc( sizeof( struct node_t ) );

	if ( first == NULL ) {
		first = newNode;
		newNode->next = NULL;
	} else {
		int n;
		printf( "Enter after what data to insert: " );
		scanf( "%d", &n );

		struct node_t *cur;
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

/*
==============================
Display

	Displays the linked list
==============================
*/
void Display( void ) {
	printf( "\nLinked list contains: " );

	struct node_t *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "%d ", p->data );
		if ( p->next != NULL ) {
			printf( "-> " );
		}
	}

	printf( "\n" );
}

/*
=========================================
Delete

	Deletes a node from the linked list
=========================================
*/
void Delete( void ) {
	if ( first == NULL ) {
		return;
	}

	int n;
	printf( "Enter data to delete: " );
	scanf( "%d", &n );

	if ( first->data == n ) {
		struct node_t *p = first;
		first = first->next;
		free( p );
	} else {
		struct node_t *cur, *prev;
		for ( cur = first, prev = NULL;
			  cur->data != n && cur->next != NULL;
			  prev = cur, cur = cur->next ) {
			;
		}

		if ( cur->data != n ) {
			printf( "\nData to delete could not be found.\n" );
			return;
		} else {
			prev->next = cur->next;
			printf( "\nDeleted.\n" );
		}

		free( cur );
	}
}

/*
==============================
Reverse

	Reverses the linked list
==============================
*/
void Reverse( void ) {
	if ( first == NULL || first->next == NULL ) {
		return;
	}
 	struct node_t *prev, *cur, *next;

	for ( prev = NULL, cur = first;
		  cur != NULL;
		  prev = cur, cur = next ) {
		next = cur->next;
		cur->next = prev;
	}

	first = prev;
}
