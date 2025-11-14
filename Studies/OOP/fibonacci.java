
class fibonacciClass{
    int count;
    fibonacciClass(int count ){
        this.count = count ;
    }
    fibonacciClass(){
        this.count = 3 ; 
    }

    public void printFibonacci(){
        int n1 = 0 , n2 = 1 , n3 ; 
        System.out.print(n1 + " " + n2);

        for ( int i = 2 ; i <= count ; i++){
            n3 = n1 + n2 ; 
            System.out.print(" " + n3);
            n1 = n2 ;
            n2 = n3 ; 
        }
        System.out.print("\n");
    }
    
}
public class fibonacci {
    public static void main(String[] args) {
        
    

    fibonacciClass fib = new fibonacciClass();
    fib.printFibonacci();
    fibonacciClass fib1 = new fibonacciClass(9);
    fib1.printFibonacci();
    
    }
}
