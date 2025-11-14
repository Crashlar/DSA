class CalculatorClass{
    int a ; 
     int b ; 

    CalculatorClass(int a  , int b ){
        this.a = a ; 
        this.b = b ;

    }
    CalculatorClass(){
        a = 0 ; 
        b = 0 ; 
    }

    public void sum(){
        System.out.println("Sum of a , b : "+ (a + b) );
        
    }
    public void Difference(){
            System.out.println("Difference  of a , b : "+ (a -  b ));
        
    }
}

public class Calculator {
    public static void main(String[] args) {
        CalculatorClass new1 = new CalculatorClass(50 , 9 );
        new1.sum();
        new1.Difference();
    }
}
