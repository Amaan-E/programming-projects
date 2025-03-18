/*
    Write a program to find whether the array of integers contains a duplicate number.
*/

#include <stdio.h>
#include <stdbool.h>

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
    printf("\n");

    bool duplicate = false;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i] && i != j) {
                printf("Duplicate: %d found at %d and %d.\n", a[j], i, j);
                duplicate = true;
            }
        }
    }

    if ( !duplicate ) {
        printf("No duplicates.\n");
    }
    return 0;
}
