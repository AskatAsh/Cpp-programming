// #include<iostream>
// #include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(){
// datatype input and output:
    int a = 66;
    float x= 34.248590;
    double y= 98.87664932815;
    cin>>a>>x>>y;
    cout<<a<<" "<<fixed<<setprecision(5)<<x<<" "<<y<<endl;

// string input and output:
    char name[50];
    //cin>>name; // this takes input without spaces
    cin.getline(name,50); // this takes input with spaces
    cout<<name<<endl;

// intger array input and output:
    int num[5],i;
    for(i=0;i<5;i++){
        cin>>num[i];
    }
    for(i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
}