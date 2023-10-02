#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int fibo = a+b;
        cout<<fibo<<" ";
        a = b;
        b = fibo;
    }
}