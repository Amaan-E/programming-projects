/*
1. Write a Java program to print the sum (addition), multiply, subtract, divide and remainder of
    two numbers.
*/

// import java.util.Scanner;

class One
{
    public static void main(String args[])
    {
        if (args.length != 2) {
            System.out.println("Need to enter two numbers!");
            return;
        }
        
        int x = Integer.parseInt(args[0]);
        int y = Integer.parseInt(args[1]);
        
        System.out.println("Sum: " + (x + y));
        System.out.println("Multiply: " + (x * y));
        System.out.println("Subtract: " + (x - y));
        System.out.println("Divide: " + (x / y));
        System.out.println("Remainder: " + (x % y));
    }
}