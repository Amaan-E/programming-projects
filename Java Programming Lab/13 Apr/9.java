// x - y of a point
// tell the quadrant

import java.util.Scanner;

class Point {

    public double m_x;
    public double m_y;

    public int quadrant() {
        if (m_x > 0 && m_y > 0) {
            return 1;
        } else if (m_x < 0 && m_y < 0) {
            return 2;
        } else if (m_x < 0 && m_y > 0) {
            return 3;
        } else if (m_x > 0 && m_y < 0) {
            return 4;
        } else if (m_x == 0) {
            return 0;
        } else {
            return -1;
        }
    }

    
}

class Nine
{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        Point c = new Point();
        System.out.print("Enter x: ");
        c.m_x = input.nextDouble();
        System.out.print("Enter y: ");
        c.m_y = input.nextDouble();
        
        int q = c.quadrant();
        System.out.println("Quadrant: " + ((q == -1) ? "On y-axis" : (q == 0) ? "On x-axis" : q ));

        input.close();
    }
}