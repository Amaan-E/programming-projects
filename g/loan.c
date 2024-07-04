#include <stdio.h>

int main(void)
{
	
	float loan_amount, interest_rate, monthly_payment;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter Interest Rate: ");
	scanf("%f", &interest_rate);
	printf("Enter Monthly Payment: ");
	scanf("%f", &monthly_payment);
	
	float interest_increase = (loan_amount - monthly_payment) + (loan_amount * ((interest_rate * 100) / 12));
	float interest_increase1 = (loan_amount - monthly_payment) + ((loan_amount) * (interest_rate / (100.0f * 12.0f)));
	float interest_increase2 = (interest_increase1 - monthly_payment) + ((loan_amount) * (interest_rate / (100.0f * 12.0f)));
	float interest_increase3 = (interest_increase2 - monthly_payment) + ((loan_amount) * (interest_rate / (100.0f * 12.0f)));
	
	printf("Balance remaining after first payment: %.2f\n", interest_increase1);
	printf("Balance remaining after second payment: %.2f\n", interest_increase2);
	printf("Balance remaining after third payment: %.2f\n", (interest_increase3) );

}