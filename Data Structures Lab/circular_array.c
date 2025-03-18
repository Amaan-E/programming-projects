/*
==================================================
circular_array
==================================================
*/

#include <stdio.h>
#define MAX 100


int a[MAX];
int front = 0;
int rear = 0;

void Insert();
void Delete();
void Display();
void Copy( int n );

int main() {
	printf( "Enter size of array: " );
	int n;
	scanf( "%d", &n );
	Copy( n );
	for ( ;; ) {
		printf( "Menu:\n"
				"1. Insert.\n"
				"2. Delete.\n"
				"3. Display.\n"
				"4. Exit.\n"
				"Enter your choice: " );
		int x;
		scanf( "%d", &x );
		switch ( x ) {
			case 1:
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			case 4:
				return 0;
				break;
		}
	}
}

int N;
void Copy( int n ) {
	N = n;
}
void Insert() {
	printf( "\n" );
	printf( "Enter data: " );
	int data;
	scanf( "%d", &data );
	a[rear] = data;
	rear = ( rear + 1 ) % N;
	printf( "\n" );
}

void Delete() {
	printf( "\n" );
	if ( front == rear ) {
		return;
	}
	a[front] = 0;
	front = ( front + 1 ) % N;
	printf( "\n" );
}

void Display() {
	printf( "\n" );
	for ( int i = front; i < rear; i = ( i + 1 ) % N ) {
		printf( "%d ", a[i] );
	}
	printf( "\n" );
}