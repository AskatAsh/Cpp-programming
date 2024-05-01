#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string check_palindrome(string &str){
    string s = str;
    reverse(str.begin(), str.end());
    if(s == str){
        return "true";
    }
    return "false";
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<check_palindrome(str)<<endl;
}