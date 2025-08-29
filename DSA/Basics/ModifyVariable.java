public class ModifyVariable {

    public static void main(String[] args) {
        
        int x = 7 ; 
        System.out.println(x);

        x = 12  ; 
        System.out.println("After changes");
        System.out.println(x);

        x += 12;
        System.out.println("After changes");
        System.out.println(x);

        x *= 12;
        System.out.println("After changes");
        System.out.println(x);

        x /= 12;
        System.out.println("After changes");
        System.out.println(x);
    }
    
}
