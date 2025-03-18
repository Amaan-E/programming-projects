#include <stdio.h>

int main() {
    int a[6] = {1, 2, 3, 4, 5};
    int i;
    for (i = 5; i > 0; i--) {
        a[i] = a[i - 1];
    }
    scanf("%d", &a[0]);
    
    for (int i = 0; i < 5 + 1; i++) {
        printf("%d", a[i]);
    }
    
    return 0;
}