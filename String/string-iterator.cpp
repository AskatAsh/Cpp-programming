#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    str = "abcdefghijklmnopqrst";
    
    // string::reverse_iterator it;
    for(auto it = str.rbegin(); it != str.rend(); it++){
        cout<<*it<<endl;
    }
}