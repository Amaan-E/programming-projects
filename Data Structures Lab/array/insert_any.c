#include <stdio.h>

int a[5] = {1, 2, 4, 5, 6};

void Insert(int last, int val, int pos) {
    int i;
    for (i = last; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[i] = val;
}

int main() {
    
    Insert( 5, 3, 2);
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    return 0;
}

