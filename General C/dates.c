//date

#include <stdio.h>

int main(void)
{
	int itemn, mm, dd, yyyy;
	float unitp;
	
	printf("Enter item number: ");
	scanf("%d", &itemn);
	printf("Enter unit price: ");
	scanf("%f", &unitp);
	printf("Enter purchase date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("Item \t Unit \t Purchase\n \t Price \t Date \n %-5d \t $%6.2f \t %d/%d/%d\n", itemn, unitp, mm, dd, yyyy);
	
	return 0;

}