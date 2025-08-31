#include <iostream>
using namespace std;

int main(){

    float cost_price , sell_price;

    cout << "Enter the buying price:";
    cin >> cost_price;
    cout << "Enter the sell price:";
    cin >> sell_price;

    // calculating how much profit or low
    int after_sell = abs(int(sell_price - cost_price)); 

    if (sell_price < cost_price){
        cout << "loss by "<< after_sell;
    }
    else if (sell_price == cost_price){
        cout << "Constant pagal";
    }
    else{

        cout << "Profit by "<<after_sell ;
    }
    return 0;
}