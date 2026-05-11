class Person {

    String m_name;
    int m_age;

    void display() {
        System.out.println("Name: " + m_name);
        System.out.println("Age: " + m_age);
    }
}

class Employee extends Person {
    int m_salary;
    
    @Override
    void display() {
        super.display();
        System.out.println("Salary: " + m_salary);
    }
}

class Two {
    public static void main(String[] args) {
        Person p = new Person();
        p.display();
        Employee e = new Employee();
        e.display();
    }
}
