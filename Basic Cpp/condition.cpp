#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<x<<" is the greatest"<<endl;
    }
    else if(y>x){
        cout<<y<<" is the greatest"<<endl;
    }
    else{
        cout<<x<<" and "<<y<<" are equal"<<endl;
    }
}