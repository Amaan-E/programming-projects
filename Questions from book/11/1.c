/*
Modify Programming Project 7 from Chapter 2 so that it includes the following function:

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the dollars parameter. The twenties parameter points to a variable in which the function will store the number of $20 bills required. The tens, fives and ones parameters are similar.

From 2:-
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:

Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers.
 */


#include <stdio.h>

void pay_amount( int dollars, int *twenties, int *tens, int *fives, int *ones );

int main() {
	
    int dollars;
    int numberOf20, numberOf10, numberOf5, numberOf1;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    
    pay_amount( dollars, &numberOf20, &numberOf10, &numberOf5, &numberOf1 );

    printf("$20 bills: %d\n", numberOf20 );

    printf("$10 bills: %d\n", numberOf10 );

    printf(" $5 bills: %d\n", numberOf5 );

    printf(" $1 bills: %d\n", numberOf1 );

	return 0;
}

/***********************************************************
The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the dollars parameter. The twenties parameter points to a variable in which the function will store the number of $20 bills required. The tens, fives and ones parameters are similar.
*************************************************************/

void pay_amount( int dollars, int *twenties, int *tens, int *fives, int *ones ) {
	
	*twenties = dollars / 20;
	dollars -= 20 * ( dollars / 20 );
	*tens = dollars / 20;
	dollars -= 10 * ( dollars / 10 );
	*fives = dollars / 20;
	dollars -= 5 * ( dollars / 5 );
	*ones = dollars / 20;
	
}


