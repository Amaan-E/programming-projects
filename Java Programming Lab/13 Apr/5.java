/*
5. Write a Java program to accept a number and check whether the number is even or not.
Prints 1 if the number is even or 0 if odd.
*/

class Five
{
    public static void main(String args[])
    {
        if (args.length != 1)
        {
            System.err.println("Usage: a number [0...9] , 28, 1, .. ");
            System.exit(1);
        }
    
        int x = Integer.parseInt(args[0]);
        if (x % 2 == 0) 
        {
            System.out.println(1);
        } 
        else
        {
            System.out.println(0);
        }
    }
}