#include <iostream>
using namespace std;

// class
class Player{
private:
    int score;
    int health;

public:
    // setter
    void setScore(int s ){
        score = s ; 
    }

    void setHealth(int s ){
        health = s ; 
    }

    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }

public:
    void showHealth(){
        cout << "Health is : "<< health<< endl;
    }
    void showScore(){
        cout << "Score is : "<< score<< endl;
    }
};

int main(){

    Player obj;  

    obj.setScore(10);
    obj.setHealth(100);
    // obj.showHealth();
    // obj.showScore();
    obj.getHealth();
    obj.getScore();

    
}