#include <iostream>
#include <math.h>
using namespace std;

const double pi = 3.1416;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double CalculateArea()
    {
        double area = pi * pow(radius, 2);
        return area;
    }

    double CalculateCircumference()
    {
        double circum = 2 * pi * radius;
        return circum;
    }
};

int main()
{
    double radius;
    cout<<"Enter the radius of circle: ";
    cin>> radius;
    Circle cr(radius);
    cout << "Area of Circle: " << cr.CalculateArea() << endl;
    cout<< "Circumference of Circle: "<<cr.CalculateCircumference()<< endl;
}