// Interface 1
interface Animal {
    public void eat();
}

// Interface 2
interface Mammal {
    public void walk();
}

// Class implementing both interfaces
class Dog implements Animal, Mammal {
    public void eat() {
        System.out.println("Dog is eating");
    }

    public void walk() {
        System.out.println("Dog is walking");
    }
}

public class multipleInhertance {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();
        dog.walk();
    }
}
