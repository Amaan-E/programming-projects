#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} node;

node *first  = NULL;

void Insert();
void Display();
void Delete( void );

int main( void ) {
	for ( ;; )  {
		printf( "\nMenu:\n"
				"1. Insert.\n"
				"2. Display.\n"
				"3. Delete.\n"
				"4. Exit.\n"
				"Enter you choice: " );
		int input;
		scanf( "%d", &input );
		switch (input) {
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
				printf("Invalid Option!");
				break;
		}
	}
	return 0;
}

void Insert() {
	printf( "\n" );
	// Insertion at beginning
	node *newNode = malloc( sizeof( node ) );
	if ( first == NULL ) {
		newNode->next = first;
		first = newNode;
		first->next = first;
	} else {
		node *p;
		for ( p = first; p->next != first; p = p->next ) {
			;
		}
		p->next = newNode;
		newNode->next = first;
		first = newNode;
	}
	printf( "Enter data: " );
	scanf( "%d", &newNode->data );
	
	printf( "\n" );
}

void Delete( void ) {
	// Deletion at beginning of a circular linked list.
	if ( first == NULL ) {
		return;
	} else {
		if ( first->next == first ) {
			free( first );
			first = NULL;
			return;
		} 
		node *cur;
		for ( cur = first; cur->next != first; cur = cur->next ) {
			;
		}
		cur->next = first->next;
		node *p = first;
		first = first->next;
		free( p );
	}
}


void Display( void ) {
	if ( first == NULL ) {
		printf( "\nLinked list is empty.\n" );
		return;
	}

	printf( "\nLinked list contains: " );
	node *p = first;
	do {
		printf( "%d -> ", p->data );
		p = p->next;
	} while ( p != first ); // Continue until we loop back to the first node

	// Print the last connection back to the first node for clarity
	printf( "(back to %d)\n", first->data );
}
