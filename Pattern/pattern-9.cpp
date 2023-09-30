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
// A A A A 
// B B B B 
// C C C C 
// D D D D 