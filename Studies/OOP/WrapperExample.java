import java.util.ArrayList;

public class WrapperExample {
    public static void main(String[] args) {
        // Autoboxing
        Integer num = 100;

        // Unboxing
        int primitiveNum = num;

        // Using Wrapper Class in Collections
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10); 
        list.add(20);

        System.out.println("List: " + list);
    }
}
