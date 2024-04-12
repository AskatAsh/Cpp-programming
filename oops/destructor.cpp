#include<bits/stdc++.h>
using namespace std;

class Temp{
    public:
    int x;
    char y;
    Temp(){
        cout<<"Temp constructor called"<<endl;
    }

    int getterX(){
        return x;
    }
    char getterY(){
        return y;
    }
    void setter(int a, char b){
        x = a;
        y = b;
    }
    // Destructor
    ~Temp(){
        cout<<"Temp destructor is called"<<endl;
    }
};

int main(){
    Temp t;
    t.setter(32, 'A');
    cout<<"Value of x and y is: "<<t.getterX() << " " << t.getterY()<<endl;

    Temp *p = new Temp();

    // manually calling destructor
    delete p;
    return 0;
}