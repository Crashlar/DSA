// x = 0 and y = 0 lies on origin 
// x = 0 and y != 0 lies on the y axis 
// x != 0 and y = 0 lies on the x axis 
//  x , y != 0 lies on the coordinate/ plane

#include <iostream>
using namespace std;

int main(){
    float x , y ; 
    cout << "enter the X_co-or : ";
    cin >> x ;
    cout << "Enter the Y_co-ordiante : ";
    cin >> y ; 
    
    if ( x == 0 && y == 0 ){
        cout << "Lies on the origin";
    }
    else if ( x == 0 && y != 0 ){
        cout << "Lies on the y-axis";
    }
    else if (x != 0 && y != 0 ){
        cout << "Lies on the plane";
    }
    else if (x != 0 && y== 0 )
    {
        cout << "Lies on x-axis";
    }
    else{
        cout << "Not Sure buddy";
    }
    
    return 0;
}

// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).