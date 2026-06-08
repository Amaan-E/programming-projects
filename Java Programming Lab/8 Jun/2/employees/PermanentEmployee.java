package employees;

public class PermanentEmployee implements SalaryCalculator
{
    static final int m_salary = 5;
    double m_duration;    
    
    public double calculateSalary()
    {
        double s = m_duration * m_salary;
        return s + ((20 / 100) * s) + ((10 / 100) * s);
    }
}