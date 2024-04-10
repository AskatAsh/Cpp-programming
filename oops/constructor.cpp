#include <bits/stdc++.h>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    // created default constructor
    Hero()
    {
        cout << "Hero Constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health, char level)
    {
        cout << "Address of this: " << this << endl;
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &titan){
        char *ch = new char[strlen(titan.name)+1];
        strcpy(ch, titan.name);
        this->name = ch;

        cout<<"Copy constructor called"<<endl;
        this->health = titan.health;
        this->level = titan.level;
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
    void setName(char name[]){
        strcpy(this->name, name);
    }
    void print()
    {
        cout << "[ Name : " << this->name << ", ";
        cout << "Health : " << this->health << ", ";
        cout << "Level : " << this->level << " ]";
        cout<<endl<<endl;
    }
};
int main()
{
    Hero hero1;
    hero1.setHealth(10);
    hero1.setLevel('D');
    char name[10] = "Askat";
    hero1.setName(name);
    hero1.print();

    // Hero hero2;
    // hero2 = hero1;
    // hero2.print();

    // calling copy constructor
    Hero hero2(hero1);
    hero2.print();
    hero1.name[0] = 'B';

    hero2 = hero1;

    hero1.print();
    hero2.print();

    return 0;
}