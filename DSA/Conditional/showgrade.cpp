/*
#include <iostream>
using namespace std;

int main(){
    float  n = 45;

    if (n >= 91 ){
        cout << "Excellent";
    }
    else{
        if (n >=81 ){
            cout << "Very good";
        }
        else{
            if (n >= 71){
                cout << "good";
            }
            else{
                if ( n >= 61){
                    cout << "Can do Better";
                }
                else{
                    if ( n>= 51){
                        cout << "Average";
                    }
                    else{
                        if(n >= 41){
                            cout << "Below Average";
                        }
                        else{
                            cout << "fail";
                        }
                    }
                }
            }
        }

    }

    return 0;
}

*/

#include <iostream>
using namespace std;

int main()
{
    float marks = 45.5;
    if (marks >= 91)
    {
        cout << "Excellent";
    }
    else if (marks >= 81)
    {
        cout << "Very good";
    }
    else if (marks >= 71)
    {
        cout << "Good";
    }
    else if (marks >= 61)
    {
        cout << "Can do better";
    }
    else if (marks >= 51)
    {
        cout << "Average";
    }
    else if (marks >= 41)
    {
        cout << "Below Average";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}