#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // static allocation
    Hero h;
    h.setHealth(87);
    h.setLevel('G');
    cout<<"health is "<<h.getHealth()<<endl;
    cout<<"level is "<<h.level<<endl;

    // dynamic allocation
    Hero *k = new Hero;
    k->setHealth(99);
    k->setLevel('U');
    // cout<<"Health is : "<<(*k).getHealth()<<endl;
    // cout<<"Level is : "<<(*k).getLevel()<<endl;
    cout<<"Health is : "<<k->getHealth()<<endl;
    cout<<"Level is : "<<k->getLevel()<<endl;
}