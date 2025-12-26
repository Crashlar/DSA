interface interface6class {

    // abstract methods
    public void display();
    public void show();
    
}

class child  implements interface6class {
    public void display() {
        System.out.println("Display method implementation");
    }
    
    public void show() {
        System.out.println("Show method implementation");
    }
}

public class interface6 {
    public static void main(String[] args) {
        child obj = new child();
        obj.display();
        obj.show();
    }
    
}
