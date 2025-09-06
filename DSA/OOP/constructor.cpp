#include <iostream>
using namespace std;

class Bike{

public:
    int tyreSize;
    int engineSize;

    // default constructor 
    // Bike(){
    //     cout << "In The Constructor "<< endl;
    // }
    
    // Parametrized Constructor 
    Bike( int tyresize  , int engine ){
        this->tyreSize  = tyresize;
        this->engineSize = engine; 
            cout << "In The Parameterized Constructor "<< endl;
    }

    // DESTRUCTOR 
    ~Bike(){
        cout << "Destructor call func"<< endl;
    }

};

int main(){
    cout << "Namaste Dream!"<< endl;
    // default constructor
    // Bike tvs; 
    // Bike honda;
    // Bike RoyalEnfield;
    
    // Parametrized function call
    Bike tvs(12 , 100); 
    Bike honda(23  , 150 );
    Bike RoyalEnfield(45 , 350 );

    cout << tvs.tyreSize<< " "<<tvs.engineSize<< endl;
    cout << honda.tyreSize<< " " <<honda.engineSize<< endl;
    cout << RoyalEnfield.tyreSize<< " " <<RoyalEnfield.engineSize<< endl;
}