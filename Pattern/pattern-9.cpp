#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        // for(int j=i;j>0;j--){
        //     cout<<j<<" ";
        // }
        for(int j=1;j<=n;j++){
            // cout<<char(i+64)<<" ";
            char ch = 'A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;

    }
}

// output
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 