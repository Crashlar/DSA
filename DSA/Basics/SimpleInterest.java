import java.util.Scanner;

public class SimpleInterest {

    public static void main(String[] args) {
        

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter three value PV , Rate , time :");
        Double principal = sc.nextDouble();
        Double rate = sc.nextDouble();
        int time = sc.nextInt();
        sc.close();

        System.out.print("The SI : ");
        double SI = (principal* rate * time )/100; 
        System.out.println(SI);
    }
    
}
