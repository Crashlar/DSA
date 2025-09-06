#include <iostream>
using namespace std;

class Bike{

public:
    // that belongs to the class 
    static int num_bikes;
    int tyreSize;
    int engineSize;

    // Parametrized Constructor 
    Bike( int tyresize  , int engine = 200 ){
        this->tyreSize  = tyresize;
        this->engineSize = engine; 
    }

    static void Set_numBikes(){
        cout << num_bikes<< endl; 
        num_bikes++;
    }
};

void print(){
    static int b = 10 ; 
    cout << b << endl ; 
    b++; 
}

// same for any object 
int Bike::num_bikes = 10 ;
int main(){

    
    cout << "Namaste Dream!"<< endl;
    Bike RoyalEnfield(45 , 350 );
    // RoyalEnfield.Set_numBikes(1);
    Bike bajaj(13);


    cout << RoyalEnfield.num_bikes<< endl;
    cout << bajaj.num_bikes<< endl;

    RoyalEnfield.Set_numBikes();
    RoyalEnfield.Set_numBikes();
    RoyalEnfield.Set_numBikes();
    bajaj.Set_numBikes();

    cout << bajaj.tyreSize<< " "<<bajaj.engineSize<< endl;
    cout << RoyalEnfield.tyreSize<< " " <<RoyalEnfield.engineSize<< endl;
}