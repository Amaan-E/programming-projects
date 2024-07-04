# include <stdio.h>

int main(void)
{
	int l, b, h, a;
	printf ("Enter Length : ");
	scanf ("%d", &l);
	printf ("Enter Breadth: ");
	scanf ("%d", &b);
	printf ("Enter Height  : ");
	scanf ("%d", &h);
	
	a = l * b * h;
	
	printf ("Area: %d\n", a);
//	printf ("Weight: %d\n", (v + 165) / 166);
	
	return 0;
	
}