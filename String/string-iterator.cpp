#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    str = "abcdefghijklmnopqrst";
    
    string:: iterator it;
    for(it = str.begin(); it != str.end(); it++){
        cout<<*it<<endl;
    }
}