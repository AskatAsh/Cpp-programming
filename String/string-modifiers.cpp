#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "abcdef";
    string str2 = "xyz";
    // str.assign("xyz");
    // str.append(str2);
    str.pop_back();
    str.push_back('p');
    cout<<str<<endl;
}