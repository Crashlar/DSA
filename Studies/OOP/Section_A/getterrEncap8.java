class Encapsulation {
    private String name; 

    // getter method
    public String getName() {
        return name;
    }

    // setter method
    public void setName(String name) {
        this.name = name;
    }
}

public class getterrEncap8 {

    public static void main(String[] args) {
        Encapsulation obj = new Encapsulation();

        // setting name
        obj.setName("Kaif Ali ");
        System.out.println(obj.getName());


        // setting name again
        obj.setName("Kaif");
        System.out.println(obj.getName());
    }
    
}
