import java.io.File;
import java.io.FileReader;
import java.io.IOException;

public class ThrowsExample {

    // The 'throws' keyword is used here to declare that this method might throw an IOException.
    public static void readFile(String fileName) throws IOException {
        System.out.println("Attempting to read file: " + fileName);
        
        // This operation can throw a FileNotFoundException, which is a checked exception.
        // The compiler forces us to declare it using 'throws' in the method signature.
        File file = new File(fileName);
        FileReader fr = new FileReader(file);
        
        // In a real scenario, you would read the file here.
        System.out.println("File found and opened successfully!");
        fr.close(); // Resources should always be closed (often in a finally block in a real application)
    }

    public static void main(String[] args) {
        // The calling method (main) must now handle the potential IOException
        // either with a try-catch block or by adding 'throws' to its own signature.
        try {
            // Calling the method that has the 'throws' declaration
            readFile("nonexistentfile.txt"); 
        } catch (IOException e) {
            // The exception thrown by readFile is caught and handled here.
            System.out.println("Exception caught in main method:");
            System.out.println("Error details: " + e.getMessage());
            // e.printStackTrace(); // Optional: print the full stack trace
        }
        
        System.out.println("Program continues after handling the exception.");
    }
}
