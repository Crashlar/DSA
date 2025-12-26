// Parent class
class Animal {
    
    void makeSound() {
        System.out.println("Animals make different sounds");
    }
}

// Child class 1
class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Dog barks");
    }
}

// Child class 2
class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Cat meows");
    }
}

public class DynamicDispatchExample {
    public static void main(String[] args) {
        // Parent class reference pointing to child class object
        Animal myAnimal;

        // Assigning Dog object to Animal reference
        myAnimal = new Dog();
        myAnimal.makeSound(); // Output: Dog barks

        // Assigning Cat object to Animal reference
        myAnimal  = new Cat();
        myAnimal.makeSound(); // Output: Cat meows
    }
}

