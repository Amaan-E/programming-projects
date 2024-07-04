# include <stdio.h>

int main(void)
{
	int h, l, w, v;
	printf ("Height : ");
	scanf ("%d", &h);
	printf ("Length : ");
	scanf ("%d", &l);
	printf ("Width  : ");
	scanf ("%d", &w);
	
	v = h * l * w;
	
	printf ("Volume: %d\n", v);
	printf ("Weight: %d\n", (v + 165) / 166);
	
	return 0;
	
}