#include <iostream>
#include<climits>
using namespace std;

class Vehicle{
public:
    int tyreSize;
    int engineSize;
    
    Vehicle( int tS  , int eS ) : tyreSize(tS) , engineSize(eS){}
    Vehicle( int tS ) : tyreSize(tS) , engineSize(12){}
    Vehicle() : tyreSize(15) , engineSize(12){}

    virtual void calculateMilage(){} ;
    virtual void refuel() {} ; 
};

// child class , derived class 
class Bike : public Vehicle{
public:
    int handleSize;
    void show(){
        cout << "Bike show func call"<<endl;
    }

    // forcefull parent said to implement if want to access the class
    void calculateMilage(){
        cout << "Milage Bike func call"<< endl ; 
    }

    void refuel(){
        cout << "refueling in the Bike"<< endl ;  
    }

}; 

int main(){
    Vehicle v;
    v.calculateMilage();

    Bike b; 
    b.calculateMilage();
    cout << b.engineSize<< endl;

    Vehicle b(200 , 34);
}