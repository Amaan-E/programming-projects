#include <stdio.h>

void SelectionSort(int a[], int n);

int main() {
    int a[6] = {5, 2, 1, 3, 6, 4};
    SelectionSort(a, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

int Smallest(int a[], int n, int k) {
    int pos = k;
    int small = a[k];
    for (int i = k + 1; i < n; i++) {
        if (a[i] < small) {
            small = a[i];
            pos = i;
        }
    }
    return pos;
}

void SelectionSort(int a[], int n) {
    int k; 
    int pos;
    int temp;
    
    for (k = 0; k < n; k++) {
        pos = Smallest(a, n, k);
        temp = a[k];
        a[k] = a[pos];
        a[pos] = temp;
    }
}