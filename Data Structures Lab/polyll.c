/*
=====================================================================================
	Write a program to store a polynomial using linked list. Also, perform addition 
	 and subtraction on two polynomials.
=====================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int coeff;
	int power;
	struct node *next;
};

struct node *first = NULL;

void Insert( void );
void Display( void );
void Addition( void );
void Subtraction( void );

int main() {
	for ( ;; ) {
		printf( "\nMenu:\n"
				"1. Insert a polynomial.\n"
				"2. Display.\n"
				"3. Addition.\n"
				"4. Subtraction.\n"
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
				Addition();
			case 4:
				Subtraction();
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

void Insert() {
	struct node *newNode = malloc( sizeof( struct node ) );
	printf( "Enter Coefficient: " );
	scanf( "%d", &newNode->coeff );
	printf( "Enter Power: " );
	scanf( "%d", &newNode->power );
	
	if ( first == NULL ) {
		newNode->next = first;
		first = newNode;
	} else {
		struct node *p;
		for ( p = first; p->next != NULL; p = p->next ) {
			;
		}
		newNode->next = NULL;
		p->next = newNode;
	}
}

void Display() {
	struct node *p;
	for ( p = first; p != NULL; p = p->next ) {
		printf( "|%d|%d|", p->coeff, p->power);
		if ( p->next != NULL ) {
			printf( " -> " );
		}
	}
}

void Addition( void ) {
	int og = first->coeff;
	struct node *prev, *cur;
	for ( prev = first, cur = first->next; cur != NULL; prev = cur, cur = cur->next ) {
		if ( first->power == cur->power ) {
			first->coeff = first->coeff + cur->coeff;
		}
	}
	if ( og != first->coeff ) {
		struct node *p, *temp;
		for ( p = first->next; p != NULL; p = p->next, free( temp ) ) {
			if ( first->power == p->power ) {
				temp = p;
			}
		}
	}

}
void Subtraction( void ) {

}