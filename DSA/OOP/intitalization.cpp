#include <iostream>
using namespace std;

class Bike{

public:
    // that belongs to the class 
    int num_bikes;
    int tyreSize;
    int engineSize;

    // Constructor 
    Bike( int tS  , int eS = 200 ) : tyreSize(tS) , engineSize(eS){}

};


int main(){

    
    cout << "Namaste Dream!"<< endl;
    Bike RoyalEnfield(15 , 350 );
    Bike bajaj(13);



    cout << RoyalEnfield.tyreSize<< " " <<RoyalEnfield.engineSize<< endl;
    cout << bajaj.tyreSize<< " "<<bajaj.engineSize<< endl;
}