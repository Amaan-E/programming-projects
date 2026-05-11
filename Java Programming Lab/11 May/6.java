class Animal {

    void makeSound() {
        System.out.println("Sound");
    }
}

class Mammal extends Animal {

    void giveBirth() {
        System.out.println("Giving birth");
    }
}

class Dog extends Mammal {

    void makeSound() {
        System.out.println("Woof!");
    }
}

class Six {

    public static void main(String[] args) {
        Animal a = new Animal();
        a.makeSound();

        Mammal m = new Mammal();
        m.makeSound();

        Dog d = new Dog();
        d.makeSound();
        d.giveBirth();
    }
}
