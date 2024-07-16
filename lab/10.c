//Compare three integers using nesting of if-else
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter First Integer: ");
    scanf("%d", &a);
    printf("Enter Second Integer: ");
    scanf("%d", &b);
    printf("Enter Third Integer: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number.", a);
        }
        else
        {
            printf("%d is the largest number.", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d is the largest number.", b);
        }
        else
        {
            printf("%d is the largest number.", c);
        }
    }
    else
		printf("All are equal.");


    return 0;
}
