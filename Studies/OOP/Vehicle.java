// Base class Vehicle
public class Vehicle {
    public void startEngine() {
        System.out.println("Engine has started successfully");
    }

    public void stopEngine() {
        System.out.println("Engine has been stopped successfully");
    }

    public static void main(String[] args) {
        Vehicle myCar = new Car();
        Vehicle myMotorcycle = new Motorcycle();

        myCar.startEngine();
        myCar.stopEngine();

        myMotorcycle.startEngine();
        myMotorcycle.stopEngine();
    }
}

// Subclass Car
class Car extends Vehicle {
    @Override
    public void startEngine() {
        System.out.println("Car Engine has started successfully");
    }

    @Override
    public void stopEngine() {
        System.out.println("Car Engine has been stopped successfully");
    }
}

// Subclass Motorcycle
class Motorcycle extends Vehicle {
    @Override
    public void startEngine() {
        System.out.println("Motorcycle Engine has started successfully");
    }

    @Override
    public void stopEngine() {
        System.out.println("Motorcycle Engine has been stopped successfully");
    }
}