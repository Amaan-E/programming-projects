#include <stdio.h>

int main(void)
{
	int gsi, grpid, pc, in, cd;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &grpid, &pc, &in, &cd);
	
	printf("GSI prefix: %d\n Group identifier: %d\n Publisher code: %d\n Item number: %d\n Check digit: %d\n", gsi, grpid, pc, in, cd);
	
	return 0;
	
}