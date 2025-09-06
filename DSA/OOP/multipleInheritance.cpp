#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base class
class Logger {
public:
    virtual void log(const string& message) {
        ofstream file("log.txt", ios::app);
        file << message << endl;
        file.close();
    }
};

class Vehicle {
protected:
    string brand;
    int year;
public:
    Vehicle(string b, int y) : brand(b), year(y) {}
    virtual void display() const {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};


class Car : public Vehicle, public Logger {
    int horsepower;
public:
    Car(string b, int y, int hp) : Vehicle(b, y), horsepower(hp) {}

    void display() const override {
        cout << "Car - Brand: " << brand << ", Year: " << year << ", HP: " << horsepower << endl;
    }

    void logDetails() {
        string msg = "Logged Car: " + brand + " (" + to_string(year) + "), HP: " + to_string(horsepower);
        log(msg);  
    }
};

// Another derived class
class Bike : public Vehicle {
    bool hasABS;
public:
    Bike(string b, int y, bool abs) : Vehicle(b, y), hasABS(abs) {}

    void display() const override {
        cout << "Bike - Brand: " << brand << ", Year: " << year << ", ABS: " << (hasABS ? "Yes" : "No") << endl;
    }
};

// Polymorphic function
void showVehicleDetails(Vehicle* v) {
    v->display();  

}

int main() {
    Car myCar("Toyota", 2020, 150);
    Bike myBike("Yamaha", 2022, true);

    showVehicleDetails(&myCar);
    showVehicleDetails(&myBike);

    myCar.logDetails();  
    return 0;
}
