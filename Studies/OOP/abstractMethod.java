abstract class Shape {
    // Abstract method
    public abstract void draw();

    // Concrete method
    public void display() {
        System.out.println("This is a shape.");
    }
}

// Concrete class
class Circle extends Shape {
    public void draw() {
        System.out.println("Drawing a circle.");
    }
}

public class abstractMethod {
    public static void main(String[] args) {
        // We can't create an object of an abstract class
        // Shape shape = new Shape
        // throwan error as base of the coding behind and the main and hidden class (abstract class) is abstract so we cant create object of it.
        
        Circle circle = new Circle();
        circle.draw();
        circle.display();
    }
}