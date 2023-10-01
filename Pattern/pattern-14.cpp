#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char x = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}

// output:
// A 
// B C 
// D E F 
// G H I J 