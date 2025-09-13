#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    // default constructor
    // Hero()
    // {
    //     cout << "Constructor called" << endl;
    // }

    // parameterized constructor
    Hero(int health)
    {
        cout << "THIS -> " << this << endl;
        this->health = health;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    // setter
    int setHealth(int h)
    {
        health = h;
    }

    // getter
    int getLevel()
    {
        return level;
    }

    // setter
    int setLevel(int l)
    {
        level = l;
    }
};

int main()
{
    Hero ansh(5);
    cout << "Paremeterized constructor" << endl;
    cout << "Level is " << ansh.level << endl;
    cout << "Health is " << ansh.getHealth() << endl;

    ansh.level = 'S';
    // using setter
    ansh.setHealth(99);
    cout << "Level is " << ansh.level << endl;

    // using getter
    cout << "Health is " << ansh.getHealth() << endl;

    // Dyanmic aLLocation
    Hero *b = new Hero(4);
    b->setHealth(70);
    b->setLevel('A');
    cout << "Level is " << (*b).getLevel() << endl;
    cout << "Health is " << (*b).getHealth() << endl;

    cout << "Level is " << b->getLevel() << endl;
    cout << "Health is " << b->getHealth() << endl;
}