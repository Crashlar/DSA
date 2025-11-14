// package Studies.OOP;
class BookClass{
    String BookName; 
    String Author; 
    int Price;

    BookClass(String BookName , String Author){
        this.BookName= BookName; 
        this.Author = Author; 

    }
    // 
    BookClass(String BookName , String Author , int Price){
        this.BookName= BookName; 
        this.Price = Price;
        }

    public void display(){
        System.out.println("BookName : "+ BookName );
        System.out.println("BookAuthor : "+ Author );
        System.out.println("BookPrice : "+ Price );
    System.out.println();
    }



}
public class book {

    public static void main(String[] args) {
        BookClass new1 = new BookClass("The last fight" , "Campus!");
        BookClass new2 = new BookClass("The last Time" , "Crashlar" , 1208);

        new1.display();

        new2.display();

    }
    
}
