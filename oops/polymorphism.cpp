#include<iostream>
using namespace std;

class Example{
    public:
    int add(int a, int b){
        return a+b;
    }
    double add(double a, double b){
        return a+b;
    }
    void add(char ch){
        cout<<"Hello "<<ch<<endl;
    }
};

int main(){
    Example ex;
    // function overloading
    cout<<ex.add(10, 20)<<endl;
    cout<<ex.add(10.54, 20.66)<<endl;
    ex.add('A');
}