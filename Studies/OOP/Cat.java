class CatClass{
    double age ; 
    String name; 

    CatClass(){
        name = "Unknown";
        age = 0.1 ; 
    }

    CatClass(double age , String name ){
        this.age = age ; 
        this.name = name ; 
    }

    public void detailPrint(){
        System.out.println("The cat name : "+ name + " and age : "+ age + " year");
    }
}
public class Cat {

    public static void main(String[] args) {
        CatClass C1 = new CatClass();
        C1.detailPrint();

        CatClass c2 = new CatClass(2  , "meow");
        c2.detailPrint();

    }
    
}
