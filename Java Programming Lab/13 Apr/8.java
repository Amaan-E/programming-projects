// 8. Write a simple Java program to calculate a Factorial of a number.

class Eight
{
    public static void main(String[] args) 
    {
        if (args.length != 1)
        {
            System.out.println("Usage: number[1,..]");
            return;
        }
        int n = Integer.parseInt(args[0]);
        int fac = 1;
        for (int i = 1; i <= n; ++i)
        {
            fac *= i;
        }
        
        System.out.println("Factorial: " + fac);
    }
}