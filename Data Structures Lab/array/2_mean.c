/*
     Write a program to find the mean of n numbers using arrays.
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

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }

    printf("\nSum = %d", sum);
    float mean = (float)sum / (n);
    printf("\nMean = %.2f", mean);
    printf("\n");
    return 0;
}
