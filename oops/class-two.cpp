#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Empty{
    // this is empty class
};
class Hero{
    public:
    int health;
    char name;
};
class Health {
    int value;
};

int main(){
    Health v1;
    Hero h1;
    Empty emp;

    h1.health = 75;
    h1.name = 'A';
    // cout<<"size : "<<sizeof(v1)<<endl;
    // cout<<"size : "<<sizeof(h1)<<endl;
    // cout<<"size : "<<sizeof(emp)<<endl;
    cout<<"health is : "<<h1.health<<endl;
    cout<<"name is : "<<h1.name<<endl;
}