public class  even{

    // Method to check if a number is even
    public static boolean isEven(int number) {
        return number % 2 == 0;
    }
    public static void main(String[] args) {
        int testNumber = 42;
        if (isEven(testNumber)) {
            System.out.println(testNumber + " is even.");
        } else {
            System.out.println(testNumber + " is odd.");
        }
    }
}

