#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    int nFactorial = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    return nFactorial/denom;
}
int main(){
    int num,r;
    cin>>num>>r;
    int result = ncr(num, r);
    cout<<"Answer is : "<<result<<endl;
}