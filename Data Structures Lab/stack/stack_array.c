#include <stdbool.h>
#include <stdio.h>

#define N 100


int content[N];
int top = 0;
int data;

bool Underflow( void );
bool Overflow( void );
void Push( void );
void Pop( void );
void Display( void );

int main() {
	for ( ;; ) {
		printf( "Menu:\n"
				"1. Push.\n"
				"2. Pop.\n"
				"3. Display\n"
				"4. Exit\n"
				"Enter your choice: " );
		int input;
		scanf( "%d", &input );
		switch ( input ) {
			case 1:
				printf( "Enter data: " );
				scanf( "%d", &data );
				Push();
				break;
			case 2:
				Pop();
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
	return top == 0;
}

bool Overflow( void ) {
	return top == N;
}

void Push( void ) {
	if ( !Overflow() ) {
		content[top++] = data;
	} else {
		printf( "Overflow.\n" );
	}
}

void Pop( void ) {
	if ( !Underflow() ) {
		top--;
	} else {
		printf( "Underflow.\n" );
	}
}

void Display( void ) {
	printf( "\nStack: " );
	int *p;
	for ( p = content; p < content + top; p++ ) {
		printf( "%d, ", *p );
	}
	printf( "\n" );
}