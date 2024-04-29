#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string string_reverse(string str){
    // string st;
    // for(int i=str.length()-1; i>=0; i--){
    //     st += str[i];
    // }
    reverse(str.begin(), str.end());
    return str;
}
int main(){
    string str;
    getline(cin, str);
    cout<<string_reverse(str)<<endl;
}
