#include<iostream>
#include "Hero.cpp"
using namespace std;

class Empty{
    // this is empty class
};
// class Hero{
//     int health;
//     char name;
// };
class Health {
    int value;
};

int main(){
    Health v1;
    Hero h1;
    Empty emp;
    // cout<<"size : "<<sizeof(v1)<<endl;
    // cout<<"size : "<<sizeof(h1)<<endl;
    cout<<"size : "<<sizeof(emp)<<endl;
}