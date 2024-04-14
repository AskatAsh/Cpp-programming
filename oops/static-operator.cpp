#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    static int timeToLevel;

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
    static int random(){
        return timeToLevel;
    }
};

int Hero::timeToLevel = 55;

int main(){

    cout<<Hero::random()<<endl;

    // cout<<Hero::timeToLevel<<endl;

    // Hero hr;
    // cout<<hr.timeToLevel<<endl;
    
    // Hero hi;
    // hi.timeToLevel = 5;
    // cout<<hi.timeToLevel<<endl;
    // cout<<hr.timeToLevel<<endl;
}