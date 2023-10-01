#include<bits/stdc++.h>
using namespace std;
int main(){
    double celsius;
    cin>>celsius;

    double kelvin;
    kelvin = celsius + 273.15;

    double farenheit;
    farenheit = celsius * 1.80 + 32.00;

    double arr[2] = {kelvin, farenheit};

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
}