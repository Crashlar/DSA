// Write a program to implement the concept of Public and Private within some Methods and Classes.
// 22-09-2025
public class Encapsulation {
    private double length;

    Encapsulation(double l) {
        this.length = l;
    }

    Encapsulation() {
        this.length = 0;
    }

    private double area(){
        return 4 * length;
    }

    public static void main(String[] args) {
        Encapsulation cap1 = new Encapsulation();
        Encapsulation cap = new Encapsulation(10);
        System.out.println("first length: " + cap1.length);
        System.out.println("second object length: " + cap.length);
        System.out.println("second object area: " + cap.area());
    }
}