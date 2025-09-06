#include <iostream>
using namespace std;

class Bike{

public:
    // that belongs to the class 
    int num_bikes;
    int tyreSize;
    int engineSize;

    // polymorphism 
    Bike( int tS  , int eS = 200 ) : tyreSize(tS) , engineSize(eS){}
    Bike( int tS   ) : tyreSize(tS) , engineSize(100){}
    Bike() : tyreSize(12) , engineSize(100){}

};


    // creating functions with same name but different parameters
void add( int a , int b ){
    cout << a + b << endl ; 
}
// parameter is not same as count(parameter)
// allowed is only name same but different parameter 
void add( int a ){
    cout << a << endl ; 
}

int main(){

    add( 1, 3 ); 
    add(5);

    // cout << "Namaste Dream!"<< endl;
    // Bike RoyalEnfield(15 , 350 );
    // Bike bajaj(13);



    // cout << RoyalEnfield.tyreSize<< " " <<RoyalEnfield.engineSize<< endl;
    // cout << bajaj.tyreSize<< " "<<bajaj.engineSize<< endl;
}