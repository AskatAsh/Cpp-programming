#include<iostream>
using namespace std;

int minimum(int a, int b){
    if(a<b)return a;
    else return b;
}
int main()
{
    int a,b;
    a = 17, b = 50;
    int mx = max(a,b);

    int mn = minimum(a,b);
    cout<<mx<<endl;
    cout<<mn<<endl;
    /**
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    **/
}
