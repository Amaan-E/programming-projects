// Displays a greeting based on user input
#include <stdio.h>

int main(void)
{
	int input;
	
	printf("Enter 1, 2 or 3: ");
	scanf("%d", &input);
	
	switch(input)
	{
		case 1:
			printf("Salaam!");
			break;
		case 2:
			printf("Aadaab!");
			break;
		case 3:
			printf("Hello!"); 
			break;
		default:
			printf("Incorrect Option.");
			break;
	}		
			
}
