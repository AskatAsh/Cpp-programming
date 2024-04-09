#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    // created default constructor
    Hero()
    {
        cout << "Hero Constructor called" << endl;
    }

    // parameterized constructor
    Hero(int health, char level)
    {
        cout << "Address of this: " << this << endl;
        this->health = health;
        this->level = level;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void print()
    {
        cout << "Health is : " << health << endl;
        cout << "Level is : " << level << endl;
    }
};
int main()
{
    Hero ash(100, 'L');
    // cout << "Address of ash: " << &ash << endl;
    // cout<< "Health of ash: "<<ash.getHealth()<<endl;
    ash.print();
    // cout << "hello" << endl;
    // Hero h1;
    // Hero *a1 = new Hero();
    // cout << "Askat" << endl;
    return 0;
}