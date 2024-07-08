// Calculates no. of bills required to pay certain amount
#include <stdio.h>

int main(void)
{
	int amount;
	printf("Enter Ruppee Amount:");
	scanf("%d", &amount);
	
	int no_of_20s_needed, no_of_10s_needed, no_of_5s_needed, no_of_1s_needed;
	no_of_20s_needed = amount / 20;
	no_of_10s_needed = (amount - no_of_20s_needed * 20) / 10;
	no_of_5s_needed  = ((amount - no_of_20s_needed * 20) - no_of_10s_needed * 10) /  5;
	no_of_1s_needed  = (((amount - no_of_20s_needed * 20) - no_of_10s_needed * 10) - no_of_5s_needed *   5) /  1;
	
	printf("20 bills: %d \n", no_of_20s_needed);
	printf("10 bills: %d \n", no_of_10s_needed);
	printf(" 5 bills: %d \n", no_of_5s_needed);
	printf(" 1 bills: %d \n", no_of_1s_needed);
	
	return 0;
}