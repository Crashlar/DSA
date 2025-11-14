// package Studies.OOP;

class CopyConstructorClass{
    private int x ; 

    CopyConstructorClass(int value){

        System.out.println("Constructor called.");
        x = value;
    }

    CopyConstructorClass(CopyConstructorClass copy){
        x = copy.x;

        System.out.println("Copy constructor called.");
    }

    public void display(){
        
    }
    

}
public class CopyConstructor {
    public static void main(String[] args) {
        CopyConstructorClass obj = new CopyConstructorClass(8);
        CopyConstructorClass obj2 = new CopyConstructorClass(obj);


    }
    
}
