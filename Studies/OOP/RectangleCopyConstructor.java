
class RectangleCopyConstructorClass {

    private double length;
    private double width;



    RectangleCopyConstructorClass(double length, double breath) {
        System.out.println("Parameterized constructor called.");
        this.length = length;
        this.width = breath;
    }

  
    RectangleCopyConstructorClass(RectangleCopyConstructorClass copy) {
        System.out.println("Copy constructor called.");
       
        length = copy.length;
        width = copy.width;
    }


    public void display() {
        System.out.println("Length: " + length + ", Width: " + width);
    }
}

public class RectangleCopyConstructor {
    public static void main(String[] args) {        System.out.println("Creating originalObject...");
        RectangleCopyConstructorClass originalObject = new RectangleCopyConstructorClass(15.5, 8.0);
        
        System.out.print("Original Object's dimensions: ");
        originalObject.display();
        System.out.println("-----------------------------------");

        System.out.println("Creating copiedObject from originalObject...");
        RectangleCopyConstructorClass copiedObject = new RectangleCopyConstructorClass(originalObject);
        System.out.print("Copied Object's dimensions: ");
        copiedObject.display();
        System.out.println("-----------------------------------");
        
        // You can see that 'copiedObject' has the same dimensions as 'originalObject'
        // because the copy constructor successfully copied the values.

        /*
        What are the advantages of a copy constructor?

        1.  Initialization from another object: It provides a convenient way to initialize a new object
            with the state of an existing object. Instead of getting a new object and then manually setting
            each field, you can do it in one step.

        2.  Cloning: It's a common way to create a duplicate (or clone) of an object. This is useful when
            you want to modify or pass an object around without affecting the original object.

        3.  Control over Copying (Shallow vs. Deep Copy): The programmer can decide how the copy is made.
            - A 'shallow copy' (like the one in this example) copies the values of the fields directly. If the fields are references to other objects, only the references are copied, not the objects themselves.
            - A 'deep copy' would involve creating new instances of any referenced objects, creating a completely independent duplicate.
            The copy constructor gives you the power to implement this logic as needed.

        4.  Simulating Pass-by-Value: When you pass an object to a method in Java, you're passing a reference. If the method modifies the object through that reference, the original object changes. By using a copy constructor inside the method, you can create a local copy and work with it, ensuring the original object remains unchanged.
        */
    }
}