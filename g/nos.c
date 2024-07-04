// Magic Square

#include <stdio.h>

int main(void)
{
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
	
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);
	
	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);
	
	int rowsum1 = one + two + three + four;
	int rowsum2 = five + six + seven + eight;
	int rowsum3 = nine + ten + eleven + twelve;
	int rowsum4 = thirteen + fourteen + fifteen + sixteen;
	
	int columnsum1 = one + five + nine + thirteen;
	int columnsum2 = two + six + ten + fourteen;
	int columnsum3 = three + seven + eleven + fifteen;
	int columnsum4 = four + eight + twelve + sixteen;
	
	int diagsum1 = one + six + eleven + sixteen;
	int diagsum2 = four + seven + ten + thirteen;
	
	printf("Row sums: %2d %2d %2d %2d\n Column sums: %2d %2d %2d %2d\n Diagnol sums: %2d %2d\n", rowsum1, rowsum2, rowsum3, rowsum4, columnsum1, columnsum2, columnsum3, columnsum4, diagsum1, diagsum2);

	return 0;
}