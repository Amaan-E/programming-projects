// Accepts student's marks in 5 subjects and assigns grades based on percentage.
#include <iostream>

#define SUBJECTS 5

int main() {
    float obtainedMarks{}, marksPerSub{};
    int failCount{ 0 };
    for ( int i{ 1 }; i <= SUBJECTS; ++i ) {
        std::cout << "Enter Marks for Subject " << i << ": ";
        std::cin >> marksPerSub;
        if ( marksPerSub < 40 ) {
            failCount++;
        }
        obtainedMarks += marksPerSub;
    }

    float totalMarks{};
    std::cout << "Enter Total Marks: ";
    std::cin >> totalMarks;
    if ( !obtainedMarks ) {
        std::cout << "Marks cannot be zero.\n";
        return 1;
    } else if ( totalMarks <= 0 ) {
        std::cout << "Total marks cannot be negative or zero.\n";
        return 1;
    } else if ( obtainedMarks > totalMarks ) {
        std::cout << "\nYou have entered obtained marks that are greater than total marks.\n";
    }

    float percentage = ( obtainedMarks / totalMarks ) * 100;
    std::cout << "Percentage: " << percentage << "%\n";

    if ( failCount > 1 ) {
        std::cout << "Repeat Year\n";
    } else {
        if ( percentage >= 90 ) {
            std::cout << "Grade: A\n";
        } else if ( percentage >= 80 ) {
            std::cout << "Grade: B\n";
        } else if ( percentage >= 70 ) {
            std::cout << "Grade: C\n";
        } else if ( percentage >= 60 ) {
            std::cout << "Grade: D\n";
        } else {
            std::cout << "Grade: F\n";
        }
    }

    return 0;
}
