#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 123;
    int len = 0;
    while(num!=0){
        int rem = num%10;
        num/=10;
        len++;
    }
    int result = 0;
    int i = len-1;
    num = 123;
    while(num!=0){
        int digit = num%10;
        num/=10;
        result = digit * pow(10, i) + result;
        i--;
    }
    cout<<result<<endl;
}