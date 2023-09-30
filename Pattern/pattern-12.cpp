#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<char(i+j+64)<<" ";
        }
        cout<<endl;
    }
    
}
// output
// A B C 
// B C D 
// C D E 