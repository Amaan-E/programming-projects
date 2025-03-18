#include <stdio.h>

#define SIZE 6
int size = SIZE; // Define size globally for temp array

void merge(int arr[], int beg, int mid, int end);
void merge_sort(int arr[], int beg, int end);

int main() {
    int arr[] = {5, 3, 8, 6, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void merge(int arr[], int beg, int mid, int end) {
    int i = beg, j = mid + 1, index = beg;
    int temp[size], k;

    // Merge the two halves into the temp array
    while ((i <= mid) && (j <= end)) {
        if (arr[i] < arr[j]) {
            temp[index] = arr[i];
            i++;
        } else {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }

    // If there are remaining elements in the left half
    if (i > mid) {
        while (j <= end) {
            temp[index] = arr[j];
            j++;
            index++;
        }
    } else { // If there are remaining elements in the right half
        while (i <= mid) {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }

    // Copy sorted elements back to the original array
    for (k = beg; k < index; k++) {
        arr[k] = temp[k];
    }
}

void merge_sort(int arr[], int beg, int end) {
    int mid;
    if (beg < end) {
        mid = (beg + end) / 2;

        // Recursively divide the array into two halves
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, beg, mid, end);
    }
}
