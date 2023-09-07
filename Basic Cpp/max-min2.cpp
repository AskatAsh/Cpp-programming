#include<iostream>
using namespace std;
/*
int minimum(int a, int b){
    if(a<b)return a;
    else return b;
}*/
int main()
{
    int a=10,b=20,c=40,d=17;
    //a = 17, b = 50;
    //int mx = max(a,b);
    //int mn = minimum(a,b);

    int mn = min(a,min(b,min(c,d)));
    int mx = max(a,max(b,max(c,d)));
    cout<<"max = "<<mx<<endl;
    cout<<"min = "<<mn<<endl;
    /**
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    **/
}
