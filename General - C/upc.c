// Computes a universal code check digit

#include <stdio.h>

int main(void)
{
	int fsd, sg, cd;
	int one_f, two_f, three_f, four_f, five_f;
	int one_s, two_s, three_s, four_s, five_s;
	
	printf("Enter first single digit:");
	scanf("%d", &fsd);
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d", &one_f, &two_f, &three_f, &four_f, &five_f);
	printf("Enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d", &one_s, &two_s, &three_s, &four_s, &five_s);
//	print("Enter check digit:");
//	scanf("%d", &cd);
	
	int sum3 = (fsd + two_f + four_f + one_s + three_s + five_s) * 3;
	
	int adtotal = (one_f + three_f + five_f + two_s + four_s + sum3) - 1;
	
	int rem = (adtotal % 10) - 9;
	
	if (rem < 0)
	{
		rem = - rem;
	}
	
	printf("Check Digit: %d\n", rem);
	
	return 0;
}