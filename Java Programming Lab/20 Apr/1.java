/*
Assignment 1: 
Write a Java program that accepts a 5-digit number and prints:
    - Sum of digits at even positions
    - Sum of digits at odd positions
    - Difference between the two
    
Example:
Input: 54321
Odd position sum = 5+3+1
Even position sum = 4+2
*/

import java.util.Scanner;

class One
{
    public static void main(String args[])
    {
        System.out.print("Input: ");
        Scanner input = new Scanner(System.in);
        
        int len = 5;
        int arr[] = new int[len];
        
        int x = input.nextInt();
        
        for (int i = len - 1; i >= 0 ; --i)
        {   
            arr[i] = x % 10; 
            x /= 10;
        }
        
        int sumEven = 0;
        int sumOdd = 0;
        for (int i = 0; i < len; ++i)
        {
            System.out.println(arr[i]);
            if (i % 2 == 0) 
            {
                sumEven += arr[i];
            } 
            else 
            {
                sumOdd += arr[i];
            }
        }
        
        System.out.println("Odd position sum = " + sumOdd);
        System.out.println("Even position sum = " + sumEven);
        
        input.close();
    }
}