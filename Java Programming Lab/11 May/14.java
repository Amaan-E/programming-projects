/*
14. Create a class “Person” with a method “speak()” that displays a message “The
person is speaking”. Create two subclasses “Student” and “Teacher” that
extend “Person” and implement the “speak()” method to display “The student
is asking a question” and “The teacher is giving a lecture” respectively.

*/

class Person {
    private static int m_age;
    
    static void speak() {
        System.out.println("the person is speaking");
    }
    Person() {
        "created"
    }
    
    Person(int age) {
        m_age = age;
    }
}
class Student extends Person {
    @Override
    void speak() {
        System.out.println("the stu");
    }
}
class Teacher extends Person {
    @Override
    void speak() {
        System.out.println("the teacher");
    }
}

class Fourteen {
    public static void main(String[] args) {
        Person.speak();
        Person p = new Person();
        p.speak();
        p.m_age = 15;
        Person m = new Student();
        m.speak();
    }
}
