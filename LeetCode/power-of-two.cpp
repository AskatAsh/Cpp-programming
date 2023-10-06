#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    // for(int i=0;i<32;i++){
    //     if(n == pow(2,i)){
    //         cout<<true<<endl;
    //         break;
    //     }
    // }
    int ans = 1;
    for(int i=0;i<31;i++){
        if(n == ans){
            cout<<true<<endl;
            break;
        }
        if(ans<INT_MAX/2){
            ans = ans * 2;
        }
    }
}