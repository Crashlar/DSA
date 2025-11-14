class DogClass{
    String name ; 
    String color ; 

    DogClass(){
        name = "Unknown";
        color = "Blue";
    }

    DogClass(String name , String color){
        this.name = name ; 
        this.color = color ; 
    }

    public void printDetail(){
        System.out.println("Dog name : "+ name + " and color : "+ color);
    }

}
public class Dog {
    public static void main(String[] args) {
        DogClass d1 = new DogClass();
        d1.printDetail();
        
        DogClass d2 = new DogClass("poppy" , "Pink");
        d2.printDetail();

    }
    
}
