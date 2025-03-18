#include <stdio.h>

int MyStrlen(char *s);
char *MyStrcpy(char *dest, const char *src);
char *MyStrCat(char *dest, const char *src);
int MyStrCmp(const char *s1, const char *s2);

int main() {
    char *s1 = "Hello";
    char ss[] = "Bye";
    printf("Length: %d\n", MyStrlen(s1));
    char s2[50];
    
    MyStrcpy(s2, s1);
    printf("s2: %s\n", s2);
    
    char s3[20] = "Hello";
    char s4[] = " you!";
    MyStrCat(s3, s4);
    printf("cat: ");
    for (char *p = s3; *p; p++) {
        printf("%c", *p);
    }
    printf("\n");
    printf("cmp: %d", MyStrCmp(s1, s3));
    printf("\n");
    return 0;
}

int MyStrCmp(const char *s1, const char *s2) {
    int i;
    for (i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    
    return s1[i] - s2[i];
}

char *MyStrCat(char *dest, const char *src) {
    int i;
    for (i = 0; dest[i]; i++) {
        ;
    }
    for (int j = 0; src[j]; i++, j++) {
        dest[i] = src[j];
    }
    dest[i] = '\0';
    return dest;
}

int MyStrlen(char *s) {
    int i = 0;
    while(s[i]) {
        i++;
    }
    return i;
}

char *MyStrcpy(char *dest, const char *src) {
    int i;
    for(i = 0; src[i]; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}