#include<iostream>
using namespace std;
int main(){
    char ch[50];
    //cout<<"Enter the string: ";
    //cin>>ch;
    cin.getline(ch,50);
    cout<<"Your have entered:\n"<<ch;
}