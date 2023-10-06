#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n;
    int temp = 0;
    while(m!=0){
        temp = (temp << 1) | 1;
        m = (m >> 1);
    }
    int ans = (~n) & temp;
    cout<<ans<<endl;
    
}