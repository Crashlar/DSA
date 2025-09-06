#include <iostream>
using namespace std;

int mazepath(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int rightWays = mazepath(sr, sc + 1, er, ec);
    int downWays = mazepath(sr + 1, sc, er, ec);
    return rightWays + downWays;
}

// using two variable 
int maze2(int er , int ec ){
    if (er < 1 || ec < 1 ) return 0 ; 
    if (er == 1 && ec == 1 ) return 1 ; 
    int rightWays = maze2(er , ec-1); // right 
    int leftWays = maze2(er -1 ,  ec); // left 
    return rightWays + leftWays; 
}
void PrintPath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        // destination reached
        cout << s << endl;
        return;
    }
    PrintPath(sr, sc + 1, er, ec, s + 'R'); // right
    PrintPath(sr + 1, sc, er, ec, s + 'D'); // left
}

// print using 2 variable 

void PrintPath2(int er , int ec , string s  ){
    if ( er <1 || ec < 1 ) return ; 
    if (er ==1 && ec == 1) {
        // destination reached 
        cout << s << endl ;
        return ;  
    }

    PrintPath2(er , ec - 1 , s+"R"); // right 
    PrintPath2(er - 1 , ec  , s + "D"); // left 
}
int main()
{
    // cout << mazepath(0, 0, 3, 3);
    // PrintPath(1, 1, 4, 4, "");
    // cout << maze2(3 , 3 );
    PrintPath2(3 , 3 , "" );
}