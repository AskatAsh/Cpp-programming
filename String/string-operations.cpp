#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "aaagcsddassda";
    // cout<<str.find('s')<<endl;
    // cout<<str.rfind('s')<<endl;
    // cout<<str.find_first_of('s')<<endl;
    // cout<<str.find_last_of('x')<<endl;
    cout<<str.find_first_not_of('a')<<endl;
    cout<<str.find_last_not_of('a');
}