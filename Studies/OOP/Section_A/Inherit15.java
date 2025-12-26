class Triangle {
    double base, height;

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double getArea() {
        return 0.5 * base * height;
    }
}

class Circle {
    double radius;

    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return Math.PI * radius * radius;
    }

    double getRadius() {
        return radius;
    }
}

class Rectangle {
    double length, breadth;

    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() {
        return length * breadth;
    }
}

class Shape extends Triangle {
    Circle circle;
    Rectangle rectangle;

    Shape(double triBase, double triHeight, double circleRadius, double rectLength, double rectBreadth) {
        super(triBase, triHeight);
        
        circle = new Circle(circleRadius);
        rectangle = new Rectangle(rectLength, rectBreadth);
    }

    void displayAreas() {
        System.out.println("Triangle Area: " + getArea());
        System.out.println("Circle Area: " + circle.getArea());
        System.out.println("Rectangle Area: " + rectangle.getArea());
        System.out.println("Radius of Circle: " + circle.getRadius());
    }
}


public class Inherit15 {
    public static void main(String[] args) {
        Shape shapeObj = new Shape(10, 5, 7, 8, 4);
        shapeObj.displayAreas();
    }
}
