#include <iostream>
using namespace std;

class Player{
private:
    int health; 
    int age ; 
    int score;
    bool alive;

public:
    // getter
    int getHealth(){
        return health;
    }

    int getAge(){
        return age;
    }

    int getScore(){
        return score;
    }

    int isAlive(){
        return alive;
    }

    // setter
    void setHealth(int health ){
        this->health = health;
        // or use 
        // Player::health = health;
    }

    void setAge(int age ){
        Player::age = age;
    }

    void setScore(int x ){
         score = x ;
    }

    void setIsAlive(bool alive){
        this->alive = alive; 
    }
    

};

int addScore (Player a , Player b ){
    return a.getScore() + b.getScore() ; 
}

Player getMaxSCorePlayer(Player a, Player b ){
    if (a.getScore() > b.getScore()) return a ; 
    else return b ; 
}


int main(){

    // STATICALLY
    // COMPILE TIME , STATIC ALLOCATION  
    Player mukesh;
    Player harsh;

    mukesh.setIsAlive(true);
    mukesh.setAge(18);
    mukesh.setHealth(100);
    mukesh.setScore(90);
   
   harsh.setIsAlive(true);
   harsh.setAge(18);
   harsh.setHealth(100);
   harsh.setScore(85);
   
    cout << mukesh.isAlive()<< endl ;
    cout << mukesh.getAge() <<endl;
    cout << mukesh.getHealth() <<endl;
    cout << mukesh.getScore() <<endl;

    addScore(harsh ,mukesh );
    
    Player sanket = getMaxSCorePlayer(harsh , mukesh);
    cout << sanket.getScore()<< endl ;
    

// best case

    // pointer to object 
    // runtime , dynamic allocation 
    Player *shreya = new Player;
    // that fetch the value instend of address
    Player shobj = *shreya;

    shreya->setHealth(0); // using arrow to fetch directly data from pointer without using address

    shobj.setAge(45);
    shobj.setScore(45);
    cout << shobj.getAge()<< endl;
    cout << shobj.getScore()<< endl;
    cout << shreya->getHealth()<< endl;


    Player players[3] = {harsh , mukesh , *shreya};
}