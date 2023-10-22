#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "agcsddassda";
    // cout<<str.find('s')<<endl;
    // cout<<str.rfind('s')<<endl;
    cout<<str.find_first_of('s')<<endl;
    cout<<str.find_last_of('x')<<endl;
}