#include <stdio.h>

char *MyStrrev(const char *s, char *t);

int main() {
    char s[] = "Hello";
    char t[50];
    MyStrrev(s, t);
    
    printf("%s\n", t);
    
}

char *MyStrrev(const char *s, char *d) {
    int i;
    int j;
    for (j = 0; s[j]; j++) {
        ;
    }
    j--;
    for (i = 0; j >= 0;j--, i++) {
        d[i] = s[j];
    }
    d[i] = '\0';
    return d;
}