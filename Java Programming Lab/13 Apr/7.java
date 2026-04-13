/*
Any year is entered through the keyboard, write a program to determine whether the year is
leap or not. Use the logical operators && and ||.
*/

class Seven
{
    public static void main(String[] args) 
    {
        if (args.length != 1)
        {
            System.out.println("Usage: year[2003,..]");
            return;
        }
        int year = Integer.parseInt(args[0]);
        
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            System.out.println("leap year");
        }
    }
}