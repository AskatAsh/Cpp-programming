#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,first,second,fibo;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            first = 0;
            cout<<first<<" ";
        }
        else if(i==1){
            second = 1;
            cout<<second<<" ";
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
            cout<<fibo<<" ";
        }
    }
}