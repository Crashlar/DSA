/*Write a program to create a class of “Shape, 
  Triangle, Circle, and rectangle” then inherit all the property of “Triangle, 
  Circle, and rectangle” in Shape Class and 
  Execute in Main class to find their AREA and Radius of circle.
  22-09-2025
*/
class Shape{
    public double getArea(){
        return 0.0;
    }
}

class Triangle extends Shape{
    double base , height; 

    Triangle(double base , double height){
        this.base = base;
        this.height = height;
    }

    @Override
    public double getArea(){
        return 0.5 * base * height;
    }
}

// Rectangl e cass 

class Rectangle extends Shape{
    double length , width; 

    Rectangle(double length , double width){
        this.length = length;
        this.width = width;
    }

    @Override
    public double getArea(){
        return length * width;
    }
}

// Circle class
class Circle extends Shape {
    double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }

    public double getRadius() {
        return radius;
    }
}

public class Inherit {
    public static void main(String[] args) {
        Triangle triangle = new Triangle(10, 5);
        Rectangle rectangle = new Rectangle(8, 4);
        Circle circle = new Circle(7);

        System.out.println("Triangle Area: " + triangle.getArea());
        System.out.println("Rectangle Area: " + rectangle.getArea());
        System.out.println("Circle Area: " + circle.getArea());
        System.out.println("Circle Radius: " + circle.getRadius());
    }
}
