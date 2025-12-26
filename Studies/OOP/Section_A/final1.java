// package Studies.OOP.Section_A;
// wap to implement final keyword in a class or a method 

final class Parent {
    public final int a = 23; 
    void show() {
        System.out.println("This is a final class.");
    }
}

class final1 {
    public static void main(String[] args) {
        System.out.println("Demonstrating the 'final' keyword in Java.");

        Parent child = new Parent();
        child.show(); 
        System.out.println("This is final var interface : "+ child.a);

        }
}
