#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello I am Askat";
    stringstream stream(str);
    string word;
    while(stream>>word){
        cout<<word<<" "<<word.size()<<endl;
    }
}