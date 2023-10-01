#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            // cout<<char(i+64)<<" ";
            char ch = 'A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// output:
// A 
// B B 
// C C C 
// D D D D 