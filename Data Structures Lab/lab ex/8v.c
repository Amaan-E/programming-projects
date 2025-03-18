#include <stdio.h>

void MergeSort(int a[], int  beg, int end);

int main() {
    int a[6] = {5, 2, 1, 3, 6, 4};
    MergeSort(a, 0, 5);
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void Merge(int arr[], int beg, int mid, int end) {
    
}
void MergeSort(int a[], int  beg, int end) {
    int mid;
    if (beg < end) {
        mid = (beg + end) / 2;
        
        MergeSort(a, beg, mid);
        MergeSort(a, mid + 1, end);
        
        Merge(a, beg, mid, end);
    }
}