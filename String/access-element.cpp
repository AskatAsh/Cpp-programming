#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    str = "abcdefghij";
    // cout<<"char at index 4 "<<str[4]<<endl;
    cout<<"char at index 4 "<<str.at(4)<<endl;
    // cout<<"first element "<<str[0]<<endl;
    // cout<<"last element "<<str[str.size()-1]<<endl;
    cout<<"first element "<<str.front()<<endl;
    cout<<"last element "<<str.back()<<endl;
}