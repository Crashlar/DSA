// Write a Java program to create a class called Employee with methods called work() and getSalary(). Create a subclass called HRManager that overrides the work() method and adds a new method called addEmployee().
// Date - 10 / 10 / 2025
class EmployeeClass{
    protected int salary;
    protected int EmployeeID;

    EmployeeClass(){
        salary = 0 ;
        EmployeeID = 1 ; 

    }

    public void work(){
        System.out.println("Employee is doing our job.");
    } 

    public int getSalary(){
        return salary;
    }


}

class HRManager extends EmployeeClass{
    
    @Override
    public void work(){
        System.out.println("Hr is working");
    }

    public void addEmployee(){
        EmployeeID += 1 ; 
         System.out.println("New employee added. Total employees: " + EmployeeID);
    }

}

public class Employee {
    public static void main(String[] args) {
        HRManager hr = new HRManager();

        hr.work(); 
        System.out.println("Current Salary: " + hr.getSalary());

        hr.addEmployee(); 
        hr.addEmployee();
        
    }
}
