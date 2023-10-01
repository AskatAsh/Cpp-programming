#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        // char x = 'A'+i-1;
        for(int j=1;j<=i;j++){
            char x = 'A'+i+j-2;
            cout<<x<<" ";
            // x++;
        }
        cout<<endl;
    }
}

// output:
// A 
// B A 
// C B A 
// D C B A 