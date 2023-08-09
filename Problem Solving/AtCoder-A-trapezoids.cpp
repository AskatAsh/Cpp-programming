#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,h,area;
    cin>>a;
    cin>>b;
    cin>>h;
    if(h%2==0){
        area = ((a+b)*h)/2;
        cout<<area<<endl;
    }
}