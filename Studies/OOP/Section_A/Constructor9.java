class ConstructorClass {
    int le; 

    // default constructor
    ConstructorClass() {
        le = 0;
    }

    // parameterized constructor
    ConstructorClass(int length) {
        le = length;
    }


}

public class Constructor9 {

    public static void main(String[] args) {
        ConstructorClass obj1 = new ConstructorClass();
        System.out.println("Length using default constructor: " + obj1.le);

        // using parameterized constructor
        ConstructorClass obj2 = new ConstructorClass(10);
        System.out.println("Length using parameterized constructor: " + obj2.le);
    }
}
