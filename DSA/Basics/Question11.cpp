#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter x : ";
    cin>>x;
    cout << "Enter y : ";
    cin>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<"I knew it x : "<< x;
}


// calculate the output 
// input put as x = 1 , y = 3 
/*
    #include <iostream>
    using namespace std;
    int main()
    {
        int x,y;
        cin>>x>>y;
        x+=y;
        x-=y;
        x%=y;
        cout<<x;
    }
        */