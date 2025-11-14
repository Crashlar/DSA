import java.util.Scanner;

class EMPLOYEE {
    int employeeNumber;
    String employeeName;
    double basic;
    double da;
    double it;
    double netSalary;

    public EMPLOYEE(int employeeNumber, String employeeName, double basic) {
        this.employeeNumber = employeeNumber;
        this.employeeName = employeeName;
        this.basic = basic;
    }

    public void calculateNetSalary() {
        da = 0.50 * basic;
        double grossSalary = basic + da;
        it = 0.25 * grossSalary;
        netSalary = grossSalary - it;
    }

    public void display() {
        System.out.println("---------------------------------");
        System.out.println("Employee Number: " + employeeNumber);
        System.out.println("Employee Name: " + employeeName);
        System.out.println("Basic Salary: " + basic);
        System.out.println("DA: " + da);
        System.out.println("IT: " + it);
        System.out.println("Net Salary: " + netSalary);
        System.out.println("---------------------------------");
    }
}

public class EmployeeNew {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of employees: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        EMPLOYEE[] employees = new EMPLOYEE[n];

        for (int i = 0; i < n; i++) {
            System.out.println("\nEnter details for employee " + (i + 1) + ":");
            System.out.print("Employee Number: ");
            int empNum = scanner.nextInt();
            scanner.nextLine(); // Consume newline
            System.out.print("Employee Name: ");
            String empName = scanner.nextLine();
            System.out.print("Basic Salary: ");
            double basicSal = scanner.nextDouble();
            scanner.nextLine(); // Consume newline

            employees[i] = new EMPLOYEE(empNum, empName, basicSal);
            employees[i].calculateNetSalary();
        }

        System.out.println("\n--- Employee Details ---");
        for (int i = 0; i < n; i++) {
            employees[i].display();
        }

        scanner.close();
    }
}