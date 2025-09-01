#include <iostream>
using namespace std;

void StarTriangle(int x ){
    for(int i = 1 ; i <= x ; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
}
//greeting function 
void greeting(){
    cout << "Good Morning"<< endl;
    cout << "Have a nice day Dear"<< endl;
}
int main(){
    // greeting();
    // for (int i = 1 ; i <= 4 ; i++)
    // {
    //     greeting();
    // }
    StarTriangle(3);
    StarTriangle(4);
    StarTriangle(5);
    return 0;
}