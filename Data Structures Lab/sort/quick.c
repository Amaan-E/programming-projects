#include <stdio.h>

#define SIZE 100

int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);

int main() {
    int arr[SIZE], i, n;

    // Input the number of elements in the array
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform Quick Sort
    quick_sort(arr, 0, n - 1);

    // Print the sorted array
    printf("\nThe sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

int partition(int a[], int beg, int end) {
    int left = beg, right = end, temp, loc = beg, flag = 0;

    while (flag != 1) {
        // Move right pointer to find an element smaller than pivot
        while ((a[loc] <= a[right]) && (loc != right)) {
            right--;
        }

        if (loc == right) {
            flag = 1;
        } else if (a[loc] > a[right]) {
            // Swap pivot with right pointer element
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }

        if (flag != 1) {
            // Move left pointer to find an element greater than pivot
            while ((a[loc] >= a[left]) && (loc != left)) {
                left++;
            }

            if (loc == left) {
                flag = 1;
            } else if (a[loc] < a[left]) {
                // Swap pivot with left pointer element
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
        }
    }

    return loc; // Return pivot location
}

void quick_sort(int a[], int beg, int end) {
    int loc;

    if (beg < end) {
        // Partition the array and get pivot location
        loc = partition(a, beg, end);

        // Recursively sort left and right subarrays
        quick_sort(a, beg, loc - 1);
        quick_sort(a, loc + 1, end);
    }
}
