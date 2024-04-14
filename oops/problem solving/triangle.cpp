#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
    public:
    double sideA, sideB, sideC;

    Triangle(double a, double b, double c): sideA(a), sideB(b), sideC(c){}

    void triangleType(){
        if(sideA == sideB && sideB == sideC){
            cout<<"The Triangle is equilateral."<<endl;
        }else if(sideA == sideB || sideA == sideC || sideB == sideC){
            cout<<"The Triangle is isosceles."<<endl;
        }else{
            cout<<"The Triangle is Scelene."<<endl;
        }
    }
};

int main(){
    Triangle tri(12, 15, 19);
    tri.triangleType();
}