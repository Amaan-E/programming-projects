#include <stdio.h>

int main()
{
	int health, age, sex, residence, income;
	
	printf("Enter Health State(poor = 0 or excellent = 1): ");
	scanf("%d", &health);
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter gender(female = 0 or male = 1): ");
	scanf("%d", &sex);
	
	printf("Enter residence(city = 0 or village = 1): ");
	scanf("%d", &residence);
	
	printf("Enter income: ");
	scanf("%d", &income);

	
	
	if( health == 1 && age >= 25 && age <= 35 && sex == 1 && residence == 0)
	{
		if ( 4 * (income / 1000) > 200000)
//		printf("Exceeds 2 lakh");
		goto x;
		else
		printf("Premiuim: %d",  4 * (income / 1000));
	}
	
	else if( health == 1 && age >= 25 && age <= 35 && sex == 0 && residence == 0)
	{
		if ( 3 * (income / 1000) > 100000)
//		printf("Exceeds 1 lakh");
		goto x;
		else
		printf("Premiuim :%d",  3 * (income / 1000));
	}
	
	else if( health == 0 && age >= 25 && age <= 35 && sex == 1 && residence == 1)
	{
		if ( 6 * (income / 1000) > 10000)
//		printf("Exceeds 10000");
		goto x;
		else
		printf("Premiuim :%d",  6 * (income / 1000));
	}

	else
	{
		x: printf("The person cannot be insured.");	
	}	

	
	
/*
	if health is excellent and the person is between 25 and 35 and lives in a city
	then premiuim is ruppees 4 per thousand and his policy cannot exceed 2 lakh
	same as above but female 3 per t & 1 lakh
	if health is poor and the person is between 25 and 35 and lives in a village
	then premiuim is ruppees 6 per thousand and his policy cannot exceed 10000
	else the person is not insured
	
	output whether the person should be insured or not and their premiuim rate.
*/	
	
}