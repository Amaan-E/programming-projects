#include <stdio.h>

#define N 6

int main() {
    int a[N] = {5, 3, 4, 1, 2, 6};
    int n = N;

    // Insertion Sort
    for (int k = 1; k < n; k++) {
        int temp = a[k]; // Store the current element
        int j = k - 1;

        // Shift elements of the sorted portion of the array
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j]; // Shift element one position to the right
            j--;
        }

        // Place temp in its correct position
        a[j + 1] = temp;
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
