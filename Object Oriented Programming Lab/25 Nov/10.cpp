/*
===========================================================================================================================
Program 10: Nested Control Statements with Arrays
	Write a program to find all subsets of an array whose sum equals a given target value.
		- **Input:** Array of integers and a target sum.
		- **Output:** All subsets (in any order) that sum up to the target.
	For example:
		- **Input:** `[2, 3, 5]`, Target = `5`
		- **Output:** `[2, 3]` and `[5]`

===========================================================================================================================
*/

#include <iostream>

const int N {20};

int main( void ) {

	int a[N];
	std::cout << "Enter no. of elements to store: ";
	int n {};
	std::cin >> n;
	if ( n > N ) {
		std::cout << "Cannot store more than " << N << '.';
		return 1;
	}
	
	std::cout << "Enter elements of array: ";
	for ( int i {0}; i < n; i++ ) {
		std::cin >> a[i];
	}
	
	std::cout << "Enter a target sum: ";
	int targetSum {};
	std::cin >> targetSum;
	
	std::cout << '[';
	for ( int i {0}; i < n; i++ ) {
		for ( int j {0}; j < n; j++ ) {
			if ( a[i] + a[j] == targetSum ) {
				std::cout << a[i];
				std::cout << ", ";
				break;
			}
		}
	}
	std::cout << "] and [" << targetSum << ']';



	return 0;
}