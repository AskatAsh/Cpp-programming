#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 234;
    int sum = 0;
    int product = 1;
    while(n){
        // cout<<n<<endl;
        int rem = n%10;
        cout<<rem<<endl;
        sum = sum + rem;
        product = product * rem;
        n = n/10;
    }
    cout<<sum<<endl;
    cout<<product<<endl;
    int result = product - sum;
    cout<<result<<endl;
}