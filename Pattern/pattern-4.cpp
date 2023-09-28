#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    int i,j;
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
}

// output:
// 1 2 3 
// 4 5 6 
// 7 8 9 