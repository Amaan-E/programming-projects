class Vehicle {

    void start() {
        System.out.println("Vehicle started");
    }
}

class Car extends Vehicle {

    void drive() {
        System.out.println("Car driving");
    }
}

class SportsCar extends Car {

    @Override
    void drive() {
        System.out.println("Sports car driving fast");
    }
}

class Seven {

    public static void main(String[] args) {
        Vehicle v = new Vehicle();
        v.start();

        Car c = new Car();
        c.start();
        c.drive();

        SportsCar s = new SportsCar();
        s.start();
        s.drive();
    }
}
