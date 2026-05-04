/*
    Write a Java program to create a class Calculator that accepts two numbers
    and an operator as input. Using objects, perform the required arithmetic
    operation, handle division by zero, and maintain the history of the last five
    calculations.
*/

import java.util.Scanner;

class Calculator {
    final int historyLength = 5;
    
    double x;
    double y;
    char operator;
    double history[] = new double[historyLength];
    int out = 0;

    void input()
    {
        System.out.println("Welcome to my Calculator");
        System.out.println("(c) Amaan");
        System.out.println("Usage: 'number' 'operator' 'number'");
        System.out.println("Usage: 'operator' = '0' to exit.");
        
        Scanner in = new Scanner(System.in);
        int i = 0;
        while (true) 
        {
            System.out.print("> ");
            x = in.nextDouble();
            operator = in.next().charAt(0);
            
            if (operator == '0') 
            {
                break;
            }
            ++out;
            
            y = in.nextDouble();        
            if (operator == '+') 
            {
                System.out.println("    " + (x + y));    
                history[i++] = x + y;
            }
            else if (operator == '/')
            {
                if (y == 0) 
                    System.err.println("Division by zero.");
                history[i++] = x / y;
            }
            else if (operator == '-') 
            {
                System.out.println("    " + (x - y));    
                history[i++] = x - y;
            }
            else if (operator == '*') 
            {
                System.out.println("    " + (x * y));    
                history[i++] = x * y;
            }
            if (i >= historyLength) 
            {
                i = 0;
            }

            if (out < history.length)
                historyDisplay();
            else
                historyAll();
        }

        in.close();
    }

    void historyDisplay()
    {
        System.out.print("history: ");
        for (int i = 0; i < out; ++i)
        {
           System.out.print(history[i] + " ");
        }
        System.out.println("");
    }

    void historyAll()
    {
        System.out.print("history: ");
        for (int i = 0; i < history.length; ++i)
        {
           System.out.print(history[i] + " ");
        }
        System.out.println("");
    }
    
    public static void main(String args[])
    {
        Calculator c = new Calculator();
        c.input();
    }
    
}
