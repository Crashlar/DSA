class Parent {
    public void display() {
        System.out.println("This is the display method of Parent class");
    }
}

class Child extends Parent {

    //using override to specify that this method is overriding a method in parent class 

    @java.lang.Override 
    public void display() {
        System.out.println("This is the overridden display method of Child class");
    }
}

public class Over10 {  // Changed from 'Override' to 'Main'
    public static void main(String[] args) {
        Parent parentObj = new Parent();
        parentObj.display();

        Child childObj = new Child();
        childObj.display();
    }
}