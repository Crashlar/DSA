#include <iostream>
using namespace std;

// Parent Class
class Vehicle{
public:
    int tyreSize;
    int engineSize; 
    int lights; 
    
        Vehicle(){
            cout << "Calling Vehicle constractor"<< endl;
        }
    
};

// Inheritence
// child class
class Car : public Vehicle{
public:
    int SteeringSize;
    string CompanyName; 
    
        Car(){
            cout << "Calling Car constractor"<< endl;
        }
};

// Inheritence
// child class 
class Bike : public Vehicle{
public:
    int handleSize;

    Bike(){
        cout << "Calling Bike constractor"<< endl;
    }
};


int main(){

    Bike honda;
    honda.handleSize = 5 ; 
    honda.engineSize = 10 ; 
    honda.lights = 2 ; 
    honda.tyreSize = 12 ; 
    

    Car maruti; 
    maruti.CompanyName = "Maruti";
    maruti.SteeringSize = 12;
    



    cout << honda.tyreSize<< " " <<honda.engineSize<< endl;
    cout << maruti.CompanyName << " "<< maruti.SteeringSize<<endl;
    // cout << bajaj.tyreSize<< " "<<bajaj.engineSize<< endl;
}