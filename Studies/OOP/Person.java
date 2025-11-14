// package Studies.OOP;
public class Person {
    String name; 
    public int age ;

    // contructor 
    Person(String name , int age ){
        this.name = name; 
        this.age = age;
    }

    // method 
    public void printAttributes(){
        System.out.print("My name is " + name);
        System.out.println(" and I am " + age + " years old.");
    }


    public static void main(String[] args) {
        Person per = new Person("Mukesh", 25);
        per.printAttributes();

        Person m = new Person("Self", 20);
        m.printAttributes();
    }
}

