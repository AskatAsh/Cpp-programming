#include<iostream>
using namespace std;

class Parent{
    public:
    void tellme(){
        cout<<"This is parent"<<endl;
    }
};
class Child: public Parent{
    public:
    void tellme(){
        cout<<"This is child"<<endl;
    }
};
int main(){
    Parent pt;
    Child ch;
    ch.tellme();
    pt.tellme();
}