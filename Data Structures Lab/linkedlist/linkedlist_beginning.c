/*
Program that uses functions to perform the following operations on singly linked list:
	(i)   Creation
	(ii)  Insertion
	(iii) Deletion
	(iv)  Traversal.
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
	printf( "\nEnter data: " );
	scanf( "%d", &newNode->data );
	newNode->next = first;
	first = newNode;
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
	struct node *p = first;
	first = first->next;
	free( p );
	printf( "\nDeleted.\n" );
}

