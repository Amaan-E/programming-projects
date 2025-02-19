#include <stdio.h>

#define LEN 5 // Define LEN as necessary

/*
=====================================================
    SumTwoDimensionalArray
    Sums all elements in a two-dimensional array.
=====================================================
*/
int SumTwoDimensionalArray(const int a[][LEN], int n) {
    const int *p; // Pointer to the first element of the array
    int sum = 0;

    for ( p = a[0]; p < a[0] + n * LEN; p++) {
        sum += *p; // Add the current element to sum
    }

    return sum;
}

int main() {
    int array[3][LEN] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    int totalSum = SumTwoDimensionalArray(array, 3);
    printf("Total Sum: %d\n", totalSum); // Output: Total Sum: 120

    return 0;
}
