package employees;

public class ContractEmployee implements SalaryCalculator
{
    static final int m_salary = 5;
    double m_duration;
    
    public double calculateSalary()
    {
        return m_duration * m_salary;
    }
}