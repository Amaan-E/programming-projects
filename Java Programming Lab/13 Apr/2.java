/*
2. Write a Java program to print the area and perimeter of a circle and rectangle.
*/

import java.text.DecimalFormat;
import java.util.Scanner;

class Rectangle
{
    double m_length = 0.0;
    double m_breadth = 0.0;
    
    
    public Rectangle(double length, double breadth)
    {
        m_length = length;
        m_breadth = breadth;
    }
    
    public double area()
    {
        return m_length * m_breadth;
    }
    
    public double perimeter()
    {
        return 2 * (m_breadth + m_length);
    }
}

class Circle
{
    double m_radius = 0.0;
    
    public Circle(double radius)
    {
        m_radius = radius;
    }
    
    public double area()
    {
        return Math.PI * m_radius * m_radius;
    }
    
    public double perimeter()
    {
        return 2 * Math.PI * m_radius;
    }
}

class Two
{
    public static void main(String args[]) 
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter length of Rectangle: ");
        double x = input.nextDouble();
        System.out.print("Enter Breadth of Rectangle: ");
        double y = input.nextDouble();
        Rectangle rec = new Rectangle(x, y);
        System.out.print("Enter Radius of Circle: ");
        double r = input.nextDouble();
        Circle c = new Circle(r);
        
        System.out.println("");
     
        DecimalFormat df = new DecimalFormat("#.00");

        System.out.println("Rectangle:-");
        System.out.println("\tArea: " + rec.area());
        System.out.println("\tPerimeter: " + rec.perimeter());
        System.out.println("Circle:-");
        System.out.println("\tArea: " + df.format(c.area()));
        System.out.println("\tPerimeter: " + df.format(c.perimeter()));
        
        input.close();
    }
}