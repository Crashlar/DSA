class ShapeClass{
    double length;
    double breadth;
    double height;

    public ShapeClass(double length, double breadth, double height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    public double vol() {
        return length * breadth * height;
    }

    public void comparison(ShapeClass other) {
        double thisVolume = this.vol();
        double otherVolume = other.vol();

        System.out.println("\nComparing the two shapes...");
        System.out.println("Volume of Shape 1: " + thisVolume);
        System.out.println("Volume of Shape 2: " + otherVolume);

        if (thisVolume > otherVolume) {
            System.out.println("The first shape (called with this) has a larger volume.");
        } else if (otherVolume > thisVolume) {
            System.out.println("The second shape (passed as an argument) has a larger volume.");
        } else {
            System.out.println("Both shapes have an equal volume.");
        }
    }
}

public class ShapeNew {
    public static void main(String[] args) {
        ShapeClass s1 = new ShapeClass(10.5, 5.2, 3.0);
        ShapeClass s2 = new ShapeClass(8.0, 4.5, 6.0);

        System.out.println("Shape 1 created with dimensions (L,B,H): " + s1.length + ", " + s1.breadth + ", " + s1.height);
        System.out.println("Shape 2 created with dimensions (L,B,H): " + s2.length + ", " + s2.breadth + ", " + s2.height);
        System.out.println("Volume of S1: " + s1.vol());
        System.out.println("Volume of S2: " + s2.vol());
        s1.comparison(s2);
    }
}
