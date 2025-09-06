#include <iostream>
using namespace std;

// class
class book{

public:
    char name ; 
    int price ;
    int num_pages ; 

public:
    int countBooks(int p){
        if (price < p ) return 1 ; 
        else return 0 ; 
    }

    bool isBookPresent(char book){
        if ( name == book) return true; 
        else return false; 
    }

};

int main(){


    book ML;
    ML.name = 'H';
    ML.num_pages = 500;
    ML.price = 1000;

    cout << ML.countBooks(2000)<< endl ; 
    cout << ML.isBookPresent('W')<< endl ;
     
}