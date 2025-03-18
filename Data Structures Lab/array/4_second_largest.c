/*
    Write a program to find the second largest of n numbers using an array.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    
    int largest = a[0];
    int position = 0;
    for (int i = 1; i < n; ++i) {
        if ( a[i] > largest ) {
            largest = a[i];
            position = i;
        }
    }

    int secondLargest = a[1];
    for (int i = 0; i < n; ++i) {
        if ( a[i] != largest ) {
            if ( a[i] > secondLargest ) {
                secondLargest = a[i];
                position = i;
            }
        }
    }

    printf("\nSecond largest number in array = %d\n"
            "Its position is %d.\n", secondLargest, position);

    return 0;
}