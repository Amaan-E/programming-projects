#include <stdio.h>

void QuickSort(int *array, unsigned int low, unsigned int high);
int Partition(int *array, unsigned int low, unsigned int high);
void Swap(int *x, int *y);

int main() {
    int array[] = {5, 8, 1, 2, 4};
    unsigned int length = sizeof(array) / sizeof(array[0]);
    
    printf("Before: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    QuickSort(array, 0, length - 1);
    
    printf("After: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}

/*
===============================================================
    Quicksort
        Recursively sorts subarrays.
===============================================================
*/
void QuickSort(int *array, unsigned int low, unsigned int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pivotIndex = Partition(array, low, high);

        // Recursively sort elements before pivot
        QuickSort(array, low, pivotIndex - 1);

        // Recursively sort elements after pivot
        QuickSort(array, pivotIndex + 1, high);
    }
}

/*
===============================================================
    Partition
        Rearranges elements so that those less than or equal 
        to the pivot are on the left, and those greater are 
        on the right.
===============================================================
*/

int Partition(int *array, unsigned int low, unsigned int high) {
    // last as pivot
    int pivot = array[high];    
    
    // first as pivot
    // int pivot = array[low];
              
    // middle as pivot
    // int pivot = array[(low + high)/ 2]; 
    
    // Index of smaller element
    unsigned int i = low - 1;                 

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            Swap(&array[i], &array[j]);
        }
    }

    Swap(&array[i + 1], &array[high]);
    // Return the pivot index
    return i + 1;                 
}

/*
==================================================
    Swap
        Swap two elements.
==================================================
*/

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}