class CounterClass{
    
    static int count;

    CounterClass(){
        count += 1  ; 
    }

    public void  display(){
        System.out.println("Coout is : "+ count);
    }
    
    
}

public class Counter {
    public static void main(String[] args) {
        CounterClass  new1 = new CounterClass();

        new1.display();
        CounterClass  new2 = new CounterClass();

        new2.display();

    }
}
