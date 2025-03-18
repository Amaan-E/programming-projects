/*
     Write a program to print the position of the smallest number of n numbers using arrays.
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
    
    int smallestNo = a[0];
    int position = 0;
    for (int i = 1; i < n; ++i) {
        if ( a[i] < smallestNo ) {
            smallestNo = a[i];
            position = i;
        }
    }


    printf("\nSmallest number in array = %d\n"
            "Its position is %d.\n", smallestNo, position);

    return 0;
}