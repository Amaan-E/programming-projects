#include <cstddef>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void Push() {
    struct node *newNode = malloc( sizeof( struct node ) );
	if ( !newNode ) {
	    printf("Stack Overflow");
		return false;
	}
	newNode->next = top;
	newNode = data;
	top = newNode;
}

void Pop() {
    if (top == NULL) {
        printf("Stack Underflow");
    } else {
        printf("%d", top->data);
        struct node *p = top;
        top = top->next;
        free(p);
    }
}

int main() {
    return 0;
}