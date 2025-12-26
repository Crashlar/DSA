import java.io.IOException;

public class ExceptionDemo {

    // 1. throws: Method signature में declare करता है कि यह IOException (Checked Exception) throw कर सकता है।
    public void validateAge(int age) throws IOException {
        if (age < 18) {
            // 2. throw: 'new ArithmeticException' को explicitly (जानबूझकर) throw करता है। (Unchecked Exception)
            throw new ArithmeticException("Age is not valid for voting."); 
        } else if (age > 100) {
            // Checked Exception, इसलिए method signature में 'throws IOException' ज़रूरी था।
            throw new IOException("Age is unrealistically high.");
        } else {
            System.out.println("Welcome to vote!");
        }
    }

    public static void main(String[] args) {
        ExceptionDemo demo = new ExceptionDemo();
        
        // 3. throws का असर: validateAge method 'throws IOException' declare करता है,
        // इसलिए caller method (main) को इसे 'try-catch' से handle करना होगा।
        try {
            demo.validateAge(10); // ArithmeticException throw करेगा
        } catch (ArithmeticException e) {
            System.out.println("Caught an Unchecked Exception: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Caught a Checked Exception: " + e.getMessage());
        }

        try {
            demo.validateAge(105); // IOException throw करेगा
        } catch (ArithmeticException e) {
            System.out.println("Caught an Unchecked Exception: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("Caught a Checked Exception: " + e.getMessage());
        }
        
        try {
            demo.validateAge(30);
        } catch (ArithmeticException | IOException e) {
            // This catch block will likely not be executed for age 30
        }
    }
}