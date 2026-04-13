/*
3. Write a Java program to swap two variables with or without third variable.
*/

class Three
{
    public static void swap(int[] values, int i, int j) {
        int temp = values[i];
        values[i] = values[j];
        values[j] = temp;
    }
    
    public static void main(String args[])
    {
        int x = 5;
        int y = 10;
    
        int temp = x;
        x = y;
        y = temp;
        
        System.out.println("x: " + x + ", y: " + y);
    
        x = x + y;
        y = x - y;
        x = x - y;
        System.out.println("x: " + x + ", y: " + y);
     
        int values[] = { 5,  10 };
        swap(values, 0, 1);
     
        System.out.println("x: " + values[0] + ", y: " + values[1]);
    }
}