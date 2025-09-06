#include <iostream>
using namespace std;

class Gun
{
public:
    int ammo;
    int damage;
    int scope;
};

class Player
{
    class Helmet
    {
        int hp;
        int level;

    public:
        int setHp(int hp)
        {
            this->hp = hp;
        }

        int setLevel(int level)
        {
            this->level = level;
        }

        int getHp()
        {
            return hp;
        }

        int getlevel()
        {
            return level;
        }
    };

private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    // getter
    int getHealth()
    {
        return health;
    }

    int getAge()
    {
        return age;
    }

    int getScore()
    {
        return score;
    }

    int isAlive()
    {
        return alive;
    }

    Gun getGun()
    {
        return gun;
    }
    // setter
    void setHealth(int health)
    {
        this->health = health;
        // or use
        // Player::health = health;
    }

    void setAge(int age)
    {
        Player::age = age;
    }

    void setScore(int x)
    {
        score = x;
    }

    void setIsAlive(bool alive)
    {
        this->alive = alive;
    }
    int setgun(Gun gun)
    {
        this->gun = gun;
    }

    // sett
    void SetHelmet(int level)
    {
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;

        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "error , invalid level!" << endl;

        helmet->setHp(health);
        this->helmet = *helmet;
    }
};

int main()
{

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

    harsh.SetHelmet(2);
    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;
    harsh.setgun(akm);

    Gun awm;
    awm.ammo = (40);
    awm.damage = (300);
    awm.scope = (8);

    mukesh.setgun(awm);

    Gun gun123 = harsh.getGun();
    cout << gun123.damage << endl;
    cout << gun123.ammo << endl;
    cout << gun123.scope << endl;
}