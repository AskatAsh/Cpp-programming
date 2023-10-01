#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        
        char x = 'A'+n-i;
        for(int j=1;j<=i;j++){
            // int x = n-i+j;
            // char x = 'A'+n-i+j-1;
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}

// output:
// D 
// C D 
// B C D 
// A B C D 

// 4
// 3 4
// 2 3 4
// 1 2 3 4