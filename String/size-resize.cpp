#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    str = "abcdefghijklmnopqrst";
    cout<<str<<endl;
    cout<<"before resize "<<str.size()<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    str.resize(5);
    cout<<str<<endl;
    cout<<"after resize "<<str.length()<<endl;
    str.clear();
    cout<<str<<" "<<str.size()<<endl;    
    if(str.empty()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}