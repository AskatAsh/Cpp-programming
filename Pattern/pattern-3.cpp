#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=n;
        while(j>0){
            // cout<<i<<" ";
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}

// output:
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 