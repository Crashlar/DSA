package Studies.OOP;
class SampleClass {

    public void message(String message) {
        showMessage(message);
    }

    // Private method to show internal messages
    private void showMessage(String message) {
        System.out.println("Message: " + message);
    }
}

public class sample {

    /** Document comments 
     * This sis thr e ne srj xj4
     * rj3 ro3krc hr
     * rnxiru rx
     * rhnrui23 xr3
     * rnxru 3x
     * @param args
     */

    public static void main(String[] args) {
        SampleClass sam = new SampleClass();

        sam.message("HEllo To me");
    }
}
