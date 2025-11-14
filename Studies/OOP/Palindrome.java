class PalindromeIntClass {
    public boolean isPalindrome(int number) {
        int original = number;
        int reversed = 0;

        while (number != 0) {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }

        return original == reversed;
    }
}

class PalindromeStringClass {
    public boolean isPalindrome(String text) {
        String cleaned = text.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int left = 0, right = cleaned.length() - 1;

        while (left < right) {
            if (cleaned.charAt(left) != cleaned.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
}

public class Palindrome {
    public static void main(String[] args) {
        PalindromeIntClass intChecker = new PalindromeIntClass();
        PalindromeStringClass stringChecker = new PalindromeStringClass();

        int num = 121;
        String word = "Madam";

        System.out.println(num + " is palindrome? " + intChecker.isPalindrome(num));
        System.out.println("\"" + word + "\" is palindrome? " + stringChecker.isPalindrome(word));
    }
}
