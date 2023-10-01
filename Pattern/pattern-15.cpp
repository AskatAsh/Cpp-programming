#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            char ch = i-j+'A';
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// output:
// A 
// B C 
// C D E 
// G H I J 

// 1
// 1 2
// 2 3 4