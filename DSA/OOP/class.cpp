#include <iostream>
using namespace std;

// to declared a class
class Player{

public:
    int score; // data member (or) attribute of the class 
// protected:
// private:
    int health; // data member


    // function inside class 
    void showHealth(){
        cout<<"Health is : "<< health<< endl ;
    }
};

class Calculator{

private:
    int a = 7  ;
    int  b  = 5 ; 

public:
    void add(){
        cout << a + b << endl ; 
    }

public:
    void multiply(){
        cout << a * b << endl ; 
    }
};

int main()
{

// using fileh handling
// #ifndef ONLINE_JUDGE
//     freopen("Input.txt", "r", stdin);
//     freopen("Output.txt", "w", stdin);
// #endif

    int n = 100;
    int health[n] = {};
    int score[n] = {};
    int name[n][10] = {};

    int a = 10;

    cout << "Creating new obj as amit  : " << endl;
    // obj 1
    Player amit;
    amit.score = 90;
    amit.health = 100;

    cout << amit.score << endl;
    cout << amit.health << endl;

    // creating new obj
    cout << "Creating new obj2 : " << endl;

    // new object
    Player obj2;
    obj2.health = 90;
    obj2.score = 40;

    cout << obj2.score << endl;
    cout << obj2.health << endl;


    // accessing the class function 

    amit.showHealth();
    obj2.showHealth();


    // ACCESS THE CALCULATOT CLASS 
    Calculator obj3; 
    obj3.add();
    obj3.multiply();

}

