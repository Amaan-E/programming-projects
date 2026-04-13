/*
6. Write a Java program that accepts three integers from the user and returns true if two or
more of them (integers) have the same rightmost digit. The integers are non-negative.
*/

import java.util.Scanner;

class Six
{
    static boolean rightMostSame(int x, int y, int z)
    {
       return x % 10 == y % 10 || x % 10 == z % 10 || y % 10 == z % 10;
    }
    
    
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter x: ");
        int x = input.nextInt();
        System.out.print("Enter y: ");
        int y = input.nextInt();
        System.out.print("Enter z: ");
        int z = input.nextInt();
        
        rightMostSame(x, y, z);
        
        input.close();
    }
}