#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<i<<" ";
            // cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

// output 1:
// 0 1 2 3 4    
// 0 1 2 3 4 
// 0 1 2 3 4 
// 0 1 2 3 4 
// 0 1 2 3 4

// output 2:
// 0 0 0 0 0 
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 