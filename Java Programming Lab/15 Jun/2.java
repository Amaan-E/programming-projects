/*
2. Create an interface InterestCalculator containing methods to calculate Simple Interest and
Compound Interest. Accept the principal amount, rate of interest, and time period from the
user and display the calculated interest values.
*/

import java.util.Scanner;

interface InterestCalculator
{
   double calculateSimpleInterest();
   double calculateCompoundInterest();
}

class Calc implements InterestCalculator
{
    double m_principal = 0;
    double m_roi = 0;
    double m_days = 0;
    
    static final int m_year = 365;
    
    public double calculateSimpleInterest()
    {
        return m_roi * (m_days / m_year);
    }
    public double calculateCompoundInterest()
    {
        return Math.pow(m_principal * ( 1 + (m_roi / 100)), m_year) - m_principal; 
    }
}

class Two
{
    public static void main(String[] args) {
        Scanner in = Scanner(System.in);
        System.out.println("Principal Amount: ");
        System.out.println("Rate of interest: ");
        System.out.println("Time of Peroid: ");

        InterestCalculator i = new InterestCalculator();
        
        in.close();
    }
}