#include <stdio.h>

int main()
{
	int x;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &x);
	
	int d = x / 8;
	int r = x % 8;
	
	
	printf("%2d%d", d, r);
}