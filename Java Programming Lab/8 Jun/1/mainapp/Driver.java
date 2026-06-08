package mainapp;

import java.util.Scanner;
import electricity.BillCalculator;
import electricity.DomesticConsumer;
import electricity.CommercialConsumer;

public class Driver {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Type(c/d): ");
        char type = input.next().charAt(0);

        input.nextLine();
        
        System.out.print("Consumer Name: ");
        String name = input.nextLine();
        
        System.out.print("Consumer ID: ");
        String id = input.next();
        
        System.out.print("Units Consumed: ");
        double units = input.nextDouble();

        BillCalculator b;
        if (type == 'd')
            b = new DomesticConsumer(name, id, units);
        else 
            b = new CommercialConsumer(name, id, units);
        
        System.out.print("Bill: " + b.calculateBill());
        
        
        input.close();
    }
}
