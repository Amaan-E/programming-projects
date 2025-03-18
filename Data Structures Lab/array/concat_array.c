#include <stdio.h>

int main() {
    int a[2] = {0, 1};
    int b[3] = {2, 3, 4};
    
    int cSize = (sizeof(a)/sizeof(a[0])) + (sizeof(b)/sizeof(b[0]));
    int c[cSize];
    
    int i;
    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < sizeof(b)/sizeof(b[0]); j++) {
        c[i + j] = b[j];
    }
    
    printf("C = ");
    for (int i = 0; i < cSize; i++) {
        printf("%d ", c[i]);
    }
    
    printf("\n");
         
    return 0;
}