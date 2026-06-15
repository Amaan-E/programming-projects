import java.util.Scanner;

interface Shape {
    double calcArea();
    double calcPerimeter();
}

class Circle implements Shape {
    double m_radius = 0;

    Circle(double radius) {
        m_radius = radius;
    }

    public double calcArea() {
        return Math.PI * m_radius * m_radius;
    }

    public double calcPerimeter() {
        return 2 * Math.PI * m_radius;
    }
}

class Rectangle {

    double m_length;
    double m_breadth;

    Rectangle(double length, double breadth) {
        m_length = length;
        m_breadth = breadth;
    }

    public double calcArea() {
        return m_length * m_breadth;
    }

    public double calcPerimeter() {
        return 2 * (m_length + m_breadth);
    }
}

class One {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        
        double length = s.nextDouble();
        double breadth = s.nextDouble();
        Rectangle r = new Rectangle(length, breadth);

        double radius = s.nextDouble();
        Circle c = new Circle(radius);

        System.out.println("Rectange area: " + r.calcArea());
        System.out.println("Circle area: " + c.calcArea());
        System.out.println("Rectange perimeter: " + c.calcPerimeter());
        System.out.println("Circle perimeter: " + c.calcPerimeter());

        s.close();    
    }
}
