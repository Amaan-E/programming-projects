#include <stdbool.h>
#include <stdio.h>

#define N 100


int content[N];
int front = 0;
int back = 0;

bool Underflow( void );
bool Overflow( void );
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

bool Overflow( void ) {
	return back == N;
	//return ( back + 1 ) % N == front;
}

void Enqueue( void ) {
	if ( !Overflow() ) {
		printf( "Enter data: " );
		int data;
		scanf( "%d", &data );
		content[back++] = data;
	} else {
		printf( "Overflow.\n" );
	}
}

void Dequeue( void ) {
	//if ( !Underflow() ) {
		//front++;
		//int i = front;
		//for ( ; i < back; i++ ) {
		//	content[i] = content[i + 1];
		//}
		//back--;
	if ( Underflow() ) {
		printf( "\nQueue is empty.\n" );
		front = -1;
		back = -1;
		return;
	}
	front++;
}

void Display( void ) {
	printf( "\nQueue: " );
	int *p;
	for ( p = &content[front]; p < &content[back]; p++ ) {
		printf( "%d, ", *p );
	}
	printf( "\n" );
}