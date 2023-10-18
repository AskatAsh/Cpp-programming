#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,3};
    int len = sizeof(arr)/sizeof(int);

    int ans = 0;
    for(int i=0; i<len; i++){
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
}