#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *first = NULL;
struct node *last = NULL;

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
		newNode->prev = newNode->next = NULL;
		first = last = newNode;
	} else {
		int n;
		printf( "Enter after what data to insert: " );
		scanf( "%d", &n );
		struct node *cur;
		for ( cur = first; cur->data != n && cur != last; cur = cur->next ) {
			;
		}
		if ( cur->data != n ) {
			printf( "\nNot Found!\n" );
			return;
		}
		if ( cur == last ) {
			newNode->next = NULL;
			newNode->prev = last;
			last->next = newNode;
			last = newNode;	
		} else {
			newNode->next = cur->next;
			newNode->prev = cur;
			cur->next = newNode;
		}

	}
	printf( "\nEnter data: " );
	scanf( "%d", &newNode->data );
}

void Delete( void ) {
	if ( first == NULL ) {
		return;
	}
	int n;
	printf( "Enter data to delete: " );
	scanf( "%d", &n );
	struct node *cur;
	for ( cur = first; cur->data != n && cur != last; cur = cur->next ) {
		;
	}
	if ( cur->data != n ) {
		printf( "\nNot Found!\n" );
		return;
	}
	if ( cur == first ) {
		first = first->next;
		free( cur );
	} else if ( cur == last ) {
		last = last->prev;
		last->next = NULL;
		free( cur );
	} else {
		cur->prev->next = cur->next;
		cur->next->prev = cur->prev;
		free( cur );

	}
}

void Display( void ) {
	printf( "\nLinked list contains: " );
	struct node *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "%d -> ", p->data );
	}
	printf( "\n" );
}
/*
* if only one node:
newNode->prev = NULL;
newNode->data = x;
newNode->next = NULL;

* if many
newNode->prev = NULL;
newNode->data = x;
newNode->next = newNode2;

newNode2->prev = newNode;
newNode2->data = x;
newNode2->next = newNode3;

newNode3->prev = newNode2;
newNode3->data = x;
newNode3->next = NULL;

*/