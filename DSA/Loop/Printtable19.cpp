/*
#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <=10; i++)
    {
        cout <<"19 * "<< i << " = " <<19 * i << endl;
    }
    
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    for (int i = 19; i <= 190; i =i+1)
    {
        if (i % 19 == 0 )
        {
            cout << i << endl;
        }
        
    }
    
    return 0;
}
