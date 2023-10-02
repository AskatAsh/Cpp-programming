#include<bits/stdc++.h>
using namespace std;
int main(){
    // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            // cout<<i<<" "<<j<<endl;
            if(i+j == 10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}