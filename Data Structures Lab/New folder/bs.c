#include <stdio.h>

int BinarySearch(int a[], int n, int f);

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};    
    int ss = BinarySearch(a, 11, 7);
    if (ss != -1) {
        printf("Pos = %d(index starting from 0)\n", ss);
    } 
    return 0;
}

int BinarySearch(int a[], int n, int f) {
    
    int beg = 0;
    int end = n - 1;
    int mid;
    int pos = -1;
    
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (a[mid] == f) {
            pos = mid;
            return pos;
        } else if (a[mid] > f) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }
    
    printf("Not found!\n");
    return pos;
}