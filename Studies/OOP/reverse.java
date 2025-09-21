public class reverse {

    public static int reverseNumber(int number) {
        int reversed = 0;
        while (number != 0) {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        return reversed;
    }

    public static void main(String[] args) {
        int original = 12345;
        int reversed = reverseNumber(original);
        System.out.println("Original: " + original);
        System.out.println("Reversed: " + reversed);
    }
}
