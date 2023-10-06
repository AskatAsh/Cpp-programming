#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int bit = n&1;
    if(bit == 1){
        bit = 0;
    }
    else{
        bit = 1;
    }
    cout<<bit<<endl;
}