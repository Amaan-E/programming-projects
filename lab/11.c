// Usage of relational operators in if-else
#include <stdio.h>

int main()
{
    int marks, total_marks;
    float marksinper;

    printf("Enter marks scored: ");
    scanf("%d", &marks);

    printf("Total marks: ");
    scanf("%d", &total_marks);

    marksinper = ((float)marks / total_marks) * 100;

    if (marksinper >= 90)
        printf("You have got A+ grade.");
    else if (marksinper >= 80)
        printf("You have got A grade.");
    else if (marksinper >= 70)
        printf("You have got B grade.");
    else if (marksinper >= 60)
        printf("You have got C grade.");
    else if (marksinper >= 50)
        printf("You have got D grade.");
    else if (marksinper >= 40)
        printf("You have got E grade.");
    else
        printf("You have failed.");

    return 0;
}
