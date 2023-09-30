#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            cout<<char(x+64)<<" ";
            x++;
        }
        cout<<endl;
    }
}

// output
// A B C D 
// E F G H 
// I J K L 
// M N O P 