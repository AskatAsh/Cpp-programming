#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,prime = 1;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime && n!=1 && n!=0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }


}