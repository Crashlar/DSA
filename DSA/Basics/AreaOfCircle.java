import java.util.Scanner;

public class AreaOfCircle {
    public static void main(String[] args) {
        double radius;

        // taking input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the radius of circle : ");
        radius = scanner.nextDouble();
        scanner.close();

        // calculating area of circle 
        double Area_of_circle = 3.141592 * radius * radius;
        System.out.print("Area of circle : ");
        System.out.println(Area_of_circle);
    }
}



/*
#include <iostream>
using namespace std;

int main() {
    double radius;

    // taking input
    cout << "Enter the radius of circle : ";
    cin >> radius;

    // calculating area of circle 
    double Area_of_circle = 3.141592 * radius * radius;
    cout << "Area of circle : " << Area_of_circle << endl;

    return 0;
}
*/