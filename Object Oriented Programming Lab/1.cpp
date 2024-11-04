// Calculates percentage of marks of student in subjects(5)
#include <iostream>

#define SUBJECTS 5

int main() {
	float obtainedMarks {}, marksPerSub {};		
	for ( int i { 1 }; i <= SUBJECTS; ++i ) {
		std::cout << "Enter Marks of Subject " << i << ": ";
		std::cin >> marksPerSub;
		obtainedMarks  += marksPerSub;
	}
	
	float totalMarks {};
	std::cout << "Enter Total Marks: ";
	std::cin >> totalMarks;
	
	if ( !obtainedMarks  ) {
		std::cout << "Marks cannot be zero.\n";
		return 1;
	} else if ( totalMarks <= 0 ) {
		std::cout << "Total marks cannot be negative or zero.\n";
		return 1;
	} else if ( obtainedMarks > totalMarks ) {
		std::cout << "\nYou have entered obtained marks that are greater than total marks.\n";
	}

	std::cout << "Percentage: " << ( obtainedMarks  / totalMarks ) * 100;
	
	return 0;
}
