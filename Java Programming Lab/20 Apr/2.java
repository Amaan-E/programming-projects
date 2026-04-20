/*
Write a Java program that classifies a number as:

    - Positive / Negative / Zero
    - Even / Odd
    - Multiple of 5 or not
    - Three-digit or not

Display all classifications.
*/

import java.util.Scanner;

class Two
{
    public static void main(String args[])
    {
        System.out.print("Input: ");
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        
        System.out.println( (x % 2 == 0) ? "Even" : "Odd" );
        System.out.println( (x > 0) ? "Postive" : 
                            (x < 0) ? "Negative" :
                                        "Zero" );
        System.out.println( (x % 5 == 0) ? "Multiple of 5" : "Not a multiple of 5" );
        System.out.println( ((Math.abs(x) >= 100 && Math.abs(x) < 1000)) ? "Three-digit" : "Not a three-digit" );
        
        input.close();
    }
}
