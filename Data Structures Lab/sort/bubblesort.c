#include <stdio.h>

#define N 6
int main() {
    
    int a[N] = {5, 3, 4, 1, 2, 6};
    int n = N;
    
    for (int i = 0; i < n - 1; i++) {
        int swap = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    
    return 0;
}