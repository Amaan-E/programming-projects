### C++ Programming Lab Dated: 02/12/2024
From Chapter 3, Page 126 of Robert Lafore - Object-Oriented Programming in C++.


### Program 1: Multiplication Table Generator
    Assume that you want to generate a table of multiples of any given number. Write a program 
    that allows the user to enter the number and then generates the table, formatting it into 
    10 columns and 20 lines. Interaction with the program should look like this (only the 
    first three lines are shown):
    
        Enter a number: 7
          7  14  21  28  35  42  49  56  63  70
         77  84  91  98 105 112 119 126 133 140
        147 154 161 168 175 182 189 196 203 210

### Program 2: Temperature Conversion
    Write a temperature-conversion program that gives the user the option of converting 
    Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
    floating-point numbers. Interaction with the program might look like this:
    
        Type 1 to convert Fahrenheit to Celsius,
        2 to convert Celsius to Fahrenheit: 1
        Enter temperature in Fahrenheit: 70
        In Celsius that’s 21.111111

### Program 3: Digit to Long Integer Conversion
    Operators such as `>>`, which read input from the keyboard, must be able to convert a 
    series of digits into a number. Write a program that does the same thing. It should allow 
    the user to type up to six digits, and then display the resulting number as a type long 
    integer. The digits should be read individually, as characters, using `getche()`. 
    Constructing the number involves multiplying the existing value by `10` and then adding 
    the new digit. (Hint: Subtract `48` or `'0'` to go from ASCII to a numerical digit.)
