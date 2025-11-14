// Parent Class
class Vehicle {
    String brand;
    
    // Parent ka constructor
    Vehicle(String brand) {
        this.brand = brand;
        System.out.println("Parent (Vehicle) ka constructor chala.");
    }
}

// Child Class
class Bike extends Vehicle {
    String model;

    Bike(String brand, String model) {
        // Yahan super() call karna zaroori hai
        // Hum Parent ko uska 'brand' de rahe hain
        super(brand); // YEH LINE HAMESHA PEHLI HONI CHAHIYE
        
        this.model = model;
        System.out.println("Child (Bike) ka constructor chala.");
    }
}

// Main method
public class Main {
    public static void main(String[] args) {
        Bike myBike = new Bike("Honda", "CBR");
    }
}