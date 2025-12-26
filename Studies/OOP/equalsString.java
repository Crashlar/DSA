// package Studies.OOP;

public class equalsString {
    public static void main(String[] args) {
        String string1 = "Kaif";
        String string2 = "Kaif";
        String string3 = "ALI";

        // Compare string1 and string2
        if (string1.equals(string2)) 
            System.out.println("string1 and string2 are equal.");
         else 
            System.out.println("string1 and string2 are not equal.");


        // Compare string1 and string3
        if (string1.equals(string3)) System.out.println("string1 and string3 are equal.");
        else  System.out.println("string1 and string3 are not equal.");
        
    }
}
