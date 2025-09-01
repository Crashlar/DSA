/*
#include <iostream>
using namespace std;

int main(){
    int a , b , c;
    cout << "Enter a num : ";
    cin >> a ;
    cout << "Enter b num : ";
    cin >> b ;
    cout << "Enter c num : ";
    cin >> c ;
    for(int i = 1 ; i <= a ; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
    // second triangle star
    for(int i = 1 ; i <= b ; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
    // third triangle star
    for(int i = 1 ; i <= c ; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
    return 0;
}

*/

// Why i written as many time then function comes on field to fight

#include <iostream>
using namespace std;

int main()
{
    int a;
    for (int k = 1; k <= 3; k++)
    {
        cout << "Enter a num : ";
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= i; j++)
            {

                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
