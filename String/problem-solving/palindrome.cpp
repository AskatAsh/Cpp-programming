#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool check_palindrome(const string &str){
    string s = str;
    reverse(s.begin(), s.end());
    return s == str;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<(check_palindrome(str) ? "true" : "false")<<endl;
}