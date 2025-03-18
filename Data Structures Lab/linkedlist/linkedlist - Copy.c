#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int main( void ) {
	struct node *first = NULL;
	printf( "Enter no of elements: " );
	int n;
	scanf( "%d", &n );
	struct node *newNode;

	while ( n != 0 ) {
		newNode = malloc( sizeof( struct node ) );
		printf( "Enter data: " );
		scanf( "%d", &newNode->data );
		newNode->next = first;
		first = newNode;
		--n;
	}

	struct node *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "Linked list contains: %d ", p->data );
	}
		
}
