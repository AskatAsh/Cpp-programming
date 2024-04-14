#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
    private:
    double length, width;

    public:
    Rectangle(double l, double w): length(l), width(w) {}

    double calculateArea(){
        double area = length * width;
        return area;
    }

    double calculatePerimeter(){
        double perimeter = 2*(length + width);
        return perimeter;
    }
};

int main(){
    double length, width;
    cout<<"Enter length and width: ";
    cin>> length >> width;

    Rectangle rec(length, width);
    cout<<"Area of Rectangle: "<<rec.calculateArea()<<endl;
    cout<<"Perimeter of Rectangle: "<<rec.calculatePerimeter()<<endl;
}