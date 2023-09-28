#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n;
    while(i>0){
        int j=n;
        while(j>0){
            cout<<i<<" ";
            // cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
}

// output:
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

// 5 5 5 5 5 
// 4 4 4 4 4 
// 3 3 3 3 3 
// 2 2 2 2 2 
// 1 1 1 1 1 