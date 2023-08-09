#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,first,second,fibo;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i<=1)
        {
            first = 0;
            second = 1;
            cout<<first<<" "<<second<<" ";
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
            cout<<fibo<<" ";
        }
    }
}