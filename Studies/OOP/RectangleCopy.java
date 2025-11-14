
class RectangleClass {
    public double length;
    public double breadth;

    RectangleClass() {
        this.length = 0;
        this.breadth = 0;
    }

    RectangleClass(double l, double b) {
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


}

public class RectangleCopy{
    public static void main(String[] args) {

        // obj
        RectangleClass rect = new RectangleClass(11.9, 4.2);
        System.out.println("Length : " + rect.length);
        System.out.println("breadth : " + rect.breadth);
        System.out.println("Area : " + rect.area());
        System.out.println("Perimeter : " + rect.perimeter());
    }

}
