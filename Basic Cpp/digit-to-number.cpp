#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3] = {1, 2, 3};
    int ans = 0;
    for(int i=0; i<3; i++){
        ans = ans * 10 + arr[i];
    }
    cout<<ans<<endl;
}