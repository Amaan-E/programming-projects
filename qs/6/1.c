/*Project 6.01
Write a program that finds the largest in a series of numbers entered by the user. 
The program must prompt the user to enter numbers one by one, When the user 
enters 0 or a negative number, the program must display the largest nonnegative number entered:

Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest number entered was 100.62
Notice that the numbers aren't necessarily integers.


	float one, two, three, four, five;
	

	printf("Enter a number: ");
	scanf("%f", &two);

	printf("Enter a number: ");
	scanf("%f", &three);

	printf("Enter a number: ");
	scanf("%f", &four);

	printf("Enter a number: ");
	scanf("%f", &five);
	
	while(one < five)
	{
	printf("Enter a number: ");
	scanf("%f", &num);
	
	
		if(one > two)
			if(one > three)
				if(one > four)
					if(one > five)
	}
*/

#include <stdio.h>

int main(void) {

    float largest = 0.0f;
    float current;

    do {
        printf("Enter a number: ");
        scanf("%f", &current);

        if (current > largest)
            largest = current;
    } while (current > 0);

    printf("\nThe largest number entered was %f\n", largest);

    return 0;
}