#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string to_uppercase(string str){
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);
    cout<<to_uppercase(str)<<endl;
}