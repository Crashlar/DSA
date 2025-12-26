public class ExceptionHandlingDem {

    // 1. 'throws' कीवर्ड का उपयोग करके एक विधि घोषित करना
    // यह विधि ArithmeticException फेंक सकती है
    public static void checkDivision(int numerator, int denominator) throws ArithmeticException {
        if (denominator == 0) {
            // 2. 'throw' कीवर्ड का उपयोग करके स्पष्ट रूप से एक अपवाद फेंकना
            throw new ArithmeticException("Zero is not allowed as a denominator.");
        }
        int result = numerator / denominator;
        System.out.println("Result: " + result);
    }

    public static void main(String[] args) {
        int num1 = 20;
        int num2 = 0; // एक अपवाद पैदा करने के लिए

        // 3. 'try', 'catch', और 'finally' ब्लॉक का उपयोग करना
        try {
            System.out.println("Starting division operation...");
            // checkDivision विधि को कॉल करें, जो अपवाद फेंक सकती है
            checkDivision(num1, num2); 
            System.out.println("if no exception, this line will be printed.");

        } catch (ArithmeticException e) {
            // 4. 'catch' ब्लॉक अपवाद को पकड़ता है
            System.out.println("wrong has catch (Catch Block):");
            System.out.println("this message: " + e.getMessage());

        } finally {
            // 5. 'finally' ब्लॉक हमेशा निष्पादित होता है
            System.out.println("Finally Block: Always run this block.");
        }

        System.out.println("Program ended.");
    }
}
