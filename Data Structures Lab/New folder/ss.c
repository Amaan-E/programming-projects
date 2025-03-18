#include <stdio.h>

int SequentialSearch(int a[], int n, int f);


int main() {
    int a[] = {10, 8, 2, 7, 3, 4, 9, 1, 6, 5};
    
    int ss = SequentialSearch(a, 10, 7);
    if (ss != -1) {
        printf("Pos = %d(index starting from 0)\n", ss);
    } 
    
    return 0;
}

int SequentialSearch(int a[], int n, int f) {
    for (int i = 0; i < n; i++) {
        if (a[i] == f) {
            printf("Found\n");
            return i;
        }
    }
    printf("Not Found!\n");
    return -1;
}