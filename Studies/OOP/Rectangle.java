public class Rectangle {
    public double length;
    public double breadth;

    Rectangle() {
        this.length = 0;
        this.breadth = 0;
    }

    Rectangle(double l, double b) {
        this.length = l;
        this.breadth = b;
    }

    // method
    double area() {
        return length * breadth;
    }

    double perimeter() {
        return 2 * (length + breadth);
    }




    public static void main(String[] args) {

        // obj
        Rectangle rect = new Rectangle(1, 2);
        System.out.println("Length : " + rect.length);
        System.out.println("breadth : " + rect.breadth);
        System.out.println("Area : " + rect.area());
        System.out.println("Perimeter : " + rect.perimeter());
    }

}
