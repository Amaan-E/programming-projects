// Calculates roots of quadratic equation along with the complex case without using <complex.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, root_one, root_two, i, im, r;
	
	printf("Enter coeffecients: \n");
	scanf("%1lf%1lf%1lf", &a, &b, &c);
//	scanf("%lf%lf%lf", &a, &b, &c);
	

	
	if (a == 0)
	{
		printf("You have entered a linear equation where value of x is %.2lf.\n", -c / b);
	}
	
	d = b * b - (4 * a * c);
	
	if (d > 0)
	{
		root_one = ((-b) + sqrt(d)) / (2 * a);
		root_two = ((-b) - sqrt(d)) / (2 * a);
		printf("The roots are %.2lf and %.2lf.\n", root_one, root_two);
	}
	
	else if (d == 0)
	{
		root_one = (-b) / (2 * a);
		printf("The roots are %.2lf and %.2lf.\n", root_one, root_one);
	}
	
	else if (d < 0)
	{
	
		r = sqrt(-d);
	
		printf("%.2lf +- %.2lfi", (-b) / (2 * a), r / (2 * a));
		
	
	}
	
	return 0;
	
}
