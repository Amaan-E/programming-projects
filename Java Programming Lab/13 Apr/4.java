// 4. Write a Java program to compare two numbers.
import java.util.Scanner;

class Four 
{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter x: ");
        int x = input.nextInt();
        System.out.println("Enter y: ");
        int y = input.nextInt();
        
        if (x > y) 
        {
            System.out.println("x is greater than y");
        } 
        else if (x < y)
        {
            System.out.println("x is less than y");
        }
        else
        {
            System.out.println("x is equal to y");
        }
        
        input.close();
    }
}