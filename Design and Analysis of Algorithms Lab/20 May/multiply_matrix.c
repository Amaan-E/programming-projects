#include <stdio.h>

#define N 10

int main() {
	// Input size of Matrix A
	int a[N][N];
	int m1;
	int n1;
	printf("Enter size of matrix 'a' m x n: ");
	scanf("%d %d", &m1, &n1);
	
	
	// Input size of Matrix B
	int b[N][N];
	int m2;
	int n2;
	printf("Enter size of matrix 'b' m x n: ");
	scanf("%d %d", &m2, &n2);
	
	// Check if sizes matches m * n = n * m
	if (n1 != m2) {
	    printf("does not match m * n = n * m");
		return 1;
	} 
	
	// Input elements of first matrix
	printf("Enter elements of first matrix row-wise: ");
	for (int i = 0; i < m1; i++) {
	    for (int j = 0; j < n1; j++) {
	        scanf("%d", &a[i][j]);
		}
	}
	
	// Input elements of second matrix
	printf("Enter elements of second matrix row-wise: ");
	for (int i = 0; i < m2; i++) {
	    for (int j = 0; j < n2; j++) {
	        scanf("%d", &b[i][j]);
		}
	}
	
	// Intitaize new matrix to 0 for sum
	int c[m1][n2];
	for (int i = 0; i < m1; i++) {
	    for (int j = 0; j < n2; j++) {
           c[i][j] = 0;
		}
		printf("\n");			
	}
	
	printf("Product: \n");
	for (int i = 0; i < m1; i++) {
	    for (int j = 0; j < n2; j++) {
			for (int k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for (int i = 0; i < m1; i++) {
	    for (int j = 0; j < n2; j++) {
            printf("%d", c[i][j]);
		}
		printf("\n");			
	}
	
	
	return 0;
}