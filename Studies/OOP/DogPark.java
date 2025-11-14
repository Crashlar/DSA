// 1. Defining the Class
// This is the blueprint for a Dog.

class Dog {
    // 1a. Data Members (Properties / State)
    // These are variables that will store the state of each object.
    String breed;
    int age;
    String color;
    String name;

    // 1b. Member Functions (Methods / Behavior)
    // These define what a Dog object can do.
    void bark() {
        System.out.println(name + " says: Woof woof!");
    }

    void eat() {
        System.out.println(name + " is eating.");
    }

    void printDetails() {
        System.out.println("--- Dog Details ---");
        System.out.println("Name: " + name);
        System.out.println("Breed: " + breed);
        System.out.println("Age: " + age);
        System.out.println("Color: " + color);
        System.out.println("-------------------");
    }
}

// A separate class to run the main program
class DogPark {
    public static void main(String[] args) {
        
        // 2. Creating Objects (Instantiation)
        // We are "building" two dogs using the Dog blueprint.
        
        // objectName = new ClassName();
        Dog myDog = new Dog(); // myDog is an object (an instance) of the Dog class
        Dog neighborsDog = new Dog(); // neighborsDog is another object
        
        // 3. Initializing the Object's State
        // We use the dot operator (.) to access the data members.
        myDog.name = "Buddy";
        myDog.breed = "Golden Retriever";
        myDog.age = 3;
        myDog.color = "Golden";
        
        neighborsDog.name = "Coco";
        neighborsDog.breed = "Poodle";
        neighborsDog.age = 5;
        neighborsDog.color = "White";
        
        // 4. Calling the Object's Methods
        // We use the dot operator (.) to call the methods.
        // Each object performs the action relative to its own state.
        myDog.bark(); // Output: Buddy says: Woof woof!
        neighborsDog.bark(); // Output: Coco says: Woof woof!
        
        myDog.eat(); // Output: Buddy is eating.
        
        // Print the details for each dog
        myDog.printDetails();
        neighborsDog.printDetails();
    }
}
