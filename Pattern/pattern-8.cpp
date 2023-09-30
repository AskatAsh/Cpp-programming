#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
}

// output
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 