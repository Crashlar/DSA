public class ASCII {

    public static void main(String[] args) {
        
        char ch = 'A';
        System.out.print(ch);
        // using type cast to print ascii value

        // implicit typecasting -> forcefully do 
        int x = ch; 
        System.out.println(x);

        char name = '$';
        System.out.print(name);

        // explicit typecasting 
        int y = (int)name  ; 
        System.out.println(y);


        char hash  = '|' ;
        System.out.print(hash );
        // explicit

        int z = (int)hash;
        System.out.println(z);





    }
    
}
