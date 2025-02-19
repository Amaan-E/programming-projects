/*
 
 */


#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
	
	const int *p = a;
	*largest = *second_largest = *(a+1);
	for ( ;p < a + n; p++ ) {
		if ( *p > *largest ) {
			*largest = *p;
		}
	}
	
	
	for ( ;p < a + n;  p++ ) {
		if ( *p == *largest ) {
			continue;
		} else if ( *p > *second_largest ) {
			*second_largest = *p;
		}
	}	
}

int main() {
    int arr[5] = {3, 5, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, second_largest;

    find_two_largest(arr, n, &largest, &second_largest);
    
    printf("Largest: %d\n", largest);           // Output: Largest: 8
    printf("Second Largest: %d\n", second_largest); // Output: Second Largest: 5

    return 0;
}

