#include <stdbool.h>
#include <stdio.h>

#define N 100

int content[N];
int front = 0;
int back = 0;

bool Overflow( void );
bool Underflow( void );
void Enqueue( int data );
void Dequeue( void );
void Display( void );

int main() {
    for ( ;;) {
        printf( "Menu:\n"
                "1. Enqueue.\n"
                "2. Dequeue.\n"
                "3. Display\n"
                "4. Exit\n"
                "Enter your choice: " );
        int input;
        scanf( "%d", &input );
        switch ( input ) {
            case 1: {
                int data; // Local variable for data
                printf( "Enter data: " );
                scanf( "%d", &data );
                Enqueue( data );
                break;
            }
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                return 0;
            default:
                printf( "Invalid choice!\n" );
                break;
        }
    }

    return 0;
}

bool Overflow( void ) {
    return ( back + 1 ) % N == front; // Check if next position of back is front
}

bool Underflow( void ) {
    return front == back; // Check if the queue is empty
}

void Enqueue( int data ) {
    if ( !Overflow() ) {
        content[back] = data; // Add data at back
        back = ( back + 1 ) % N; // Circular increment
    } else {
        printf( "Overflow.\n" );
    }
}

void Dequeue( void ) {
    if ( Underflow() ) {
        printf( "Underflow.\n" );
        return; // Queue is empty
    }
    front = ( front + 1 ) % N; // Circular increment
}

void Display( void ) {
    printf( "\nQueue: " );
    if ( Underflow() ) {
        printf( "Queue is empty.\n" );
        return;
    }

    int i = front;
    while ( i != back ) {
        printf( "%d", content[i] );
        i = ( i + 1 ) % N; // Circular increment
        if ( i != back ) { // Avoid trailing comma
            printf( ", " );
        }
    }

    printf( "\n" );
}
