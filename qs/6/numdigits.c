#include<stdio.h>



int main()
{
	int x = 53;
	int d = 0;
	
	do{
	x = x / 10;
	++d;
	}while(x != 0);
	
	printf("%d", d);
	
}