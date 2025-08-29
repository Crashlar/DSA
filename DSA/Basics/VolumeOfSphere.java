import java.util.Scanner;

public class VolumeOfSphere {

    public static void main(String[] args) {
        
        // intialize a float  variable
        float radius; 

        // taking input 
        Scanner scanner =  new Scanner(System.in);
        System.out.print("Enter the radius of sphere : ");
        radius = scanner.nextInt();
        scanner.close();

        // calculating volume
        double Volume = (4/3)* 3.141592 * radius * radius * radius; 
        System.out.print("Volume of Sphere : ");
        System.out.println(Volume);
    }
    
}
