### C++ Programming Lab Dated: 09/12/2024

### Program 1: Complex Number Comparison
    Write a program that accepts two complex numbers (real and imaginary parts) and compares
    them. Use if-else to determine which complex number has a higher magnitude.
    Print "Equal" if they have the same magnitude. Interaction with the program should look like this:
    
        Enter real part of first complex number: 3
        Enter imaginary part of first complex number: 4
        Enter real part of second complex number: 1
        Enter imaginary part of second complex number: 2
        The first complex number has a higher magnitude.

### Program 2: Student Grading System
    Write a program that accepts a student's marks in 5 subjects. Use nested if-else to assign grades 
    (A, B, C, D, F) based on the percentage. If the student fails in more than one subject, print 
    "Repeat Year" regardless of percentage. Interaction with the program might look like this:
    
        Enter marks for subject 1: 75
        Enter marks for subject 2: 60
        Enter marks for subject 3: 50
        Enter marks for subject 4: 40
        Enter marks for subject 5: 30
        Repeat Year

### Program 3: Calculator with Conditional Operator
    Create a calculator program that takes two operands and an operator (+, -, *, /, %). 
    Use the conditional operator to implement the operations. Display an error message if the operator 
    is invalid or if a division by zero is attempted. Interaction with the program might look like this:
    
        Enter first operand: 10
        Enter second operand: 0
        Enter operator (+, -, *, /, %): /
        Error: Division by zero is not allowed.

### Program 4: Advanced Leap Year Checker
    Write a program that checks if a given year is a leap year. Use nested if-else for the logic:
    A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400.
    Add logic to print the next 5 leap years if the input year is not a leap year. Interaction might look like this:
    
        Enter a year: 2023
        The next leap years are: 2024, 2028, 2032, 2036, 2040

### Program 5: Character Classification
    Write a program that accepts a single character as input. Use a switch statement to classify it as 
    a vowel, consonant, digit, or special character. Handle uppercase and lowercase vowels separately. 
    Interaction with the program might look like this:
    
        Enter a character: A
        It is a vowel.

### Program 6: Quadratic Equation Solver
    Write a program to solve a quadratic equation (ax^2 + bx + c = 0). Use nested if-else to classify 
    the roots as real and distinct, real and equal, or imaginary. Use conditional operators to check 
    if the coefficients are valid (non-zero a). Interaction might look like this:
    
        Enter coefficients a, b, c: 1 -3 2
        Roots are real and distinct.

### Program 7: Date Validator and Day Counter
    Write a program to validate a date entered in DD-MM-YYYY format. Use if-else to check for validity 
    of the day, month, and year, including leap years. Add logic to calculate the day of the week for 
    the given date using a switch-case statement. Interaction might look like this:
    
        Enter date (DD-MM-YYYY): 29-02-2024
        Valid date! It falls on Thursday.

### Program 8: Multi-Level Discount System
    Develop a program that calculates the total price after applying a discount based on purchase value:
    Purchases below Rs100: no discount; Rs100-Rs500: 10% discount; Rs500-Rs1000: 
    15% discount; Above Rs1000: 20% discount. Use nested conditional operators for the discount logic.
    Interaction might look like this:
    
        Enter purchase amount: Rs600
        Total price after discount is Rs510.

### Program 9: Palindrome Number Checker
    Write a program to check if a number is a palindrome. Use a while loop to reverse the digits of 
    the number. Extend the program to print all palindrome numbers within a given range. Interaction might look like this:
    
        Enter a number: 121
        It is a palindrome.
        
### Program 10: Banking System with Menu
    Write a program to simulate a simple banking system with menu options:
    Deposit, Withdraw, Balance Inquiry, Exit. Use a switch statement to implement the menu.
    Implement input validation and ensure no withdrawal exceeds the account balance. Interaction might look like this:
    
        Choose an option (1-4): 
        Balance Inquiry - Your balance is Rs500.

### Program 11: Number Pyramid
    Create a program that generates a number pyramid. Use nested for loops to generate the pattern.
    Allow the user to input the number of rows. Interaction might look like this:
    
        Enter number of rows: 5
              1
            121
          12321
        1234321

### Program 12: Sum of Digits
    Write a program that computes the sum of digits of an integer using a while loop to extract and sum 
    the digits. Extend it to find the product of digits as well. Interaction might look like this:
    
        Enter an integer: 1234
        Sum of digits = 10; Product of digits = 24
