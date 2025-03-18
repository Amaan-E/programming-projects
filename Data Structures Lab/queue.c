#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

struct node {
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *back = NULL;

bool Underflow( void );
bool Overflow( void *p ); 
void Enqueue( void );
void Dequeue( void );
void Display( void );

int main() {
	for ( ;; ) {
		printf( "Menu:\n"
				"1. Enqueue.\n"
				"2. Dequeue.\n"
				"3. Display\n"
				"4. Exit\n"
				"Enter your choice: " );
		int input;
		scanf( "%d", &input );
		switch ( input ) {
			case 1:
				Enqueue();
				break;
			case 2:
				Dequeue();
				break;
			case 3:
				Display();
				break;
			case 4:
				return 0;
				break;
			default:
				printf( "Invalid choice!" );
				break;
		}
	}

	return 0;
}

bool Underflow( void ) {
	return front == back;
}

bool Overflow( void *p ) {
	if (  p == NULL ) {
		return true;
	}
	return false;
}

void Enqueue( void ) {
	struct node *newNode = malloc( sizeof( struct node ) );
	if ( !Overflow(newNode) ) {
		printf( "Enter data: " );
		int data;
		scanf( "%d", &data );
		newNode->data = data;
			newNode->next = NULL;
		if ( front == NULL ) {
			newNode->next = front;
			front = back = newNode;
		} else {
			back->next = newNode;
			back = newNode;
		}
	} else {
		printf( "Overflow.\n" );
	}
}

void Dequeue( void ) {
	if ( Underflow() ) {
		printf( "\nQueue is empty.\n" );
		front = back = NULL;
		return;
	}
	struct node *p = front;
	front = front->next;
	free( p );
}

void Display( void ) {
	printf( "\nQueue: " );
	struct node *p;
	for ( p = front; p != NULL; p = p->next ) {
		printf( "%d, ", p->data );
	}
	printf( "\n" );
}