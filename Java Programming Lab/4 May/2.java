/*
    2. Write a Java program to create a class Circle with radius as a data member.
        Using objects, calculate area and circumference, compare two circles based
        on area, and determine whether one circle can fit inside another.
*/

class Circle
{
    double radius;

    Circle(double r)
    {
        radius = r;
    }
    
    
    double calculateArea()
    {
        return Math.PI * radius * radius;
    }

    double calculateCircumference()
    {
        return 2 * Math.PI * radius;
    }

    public static void compare(Circle c1, Circle c2)
    {
        if (c1.calculateArea() > c2.calculateArea()) 
        {
            System.out.println("C2 can fit inside C1.");
        } else if (c1.calculateArea() < c2.calculateArea()) 
        {
            System.out.println("C1 can fit inside C2.");
        } 
        else 
        {
            System.out.println("C1 == C2");
        }   
    }
    

    public static void main(String args[])
    {
        Circle c1 = new Circle(5.0);
        Circle c2 = new Circle(10.0);

        Circle.compare(c1, c2);
    }

}
