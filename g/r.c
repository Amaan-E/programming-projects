#include <stdio.h>

int main(void)
{
	int radius, r_thrice;
	
	printf("Radius of Circle:\n");
	scanf("%d", &radius);
	
	float formula_p, v;
	formula_p = 4.0f/3.0f * 3.14f;
	r_thrice = radius * radius * radius;
	v = formula_p * r_thrice;
	
	printf ("%.2f\n", v);
	
}