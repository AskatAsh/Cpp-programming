#include<bits/stdc++.h>
using namespace std;

int countSetBits(int num){
    int count = 0;
    while(num!=0){
        num = num & (num-1);
        count++;
    }
    return count;
}
int setBits(int n1, int n2){
    // int count = 0;
    // while(n1!=0){
    //     if((n1&1) == 1){
    //         count++;
    //     }
    //     n1 = n1>>1;
    // }
    // while(n2!=0){
    //     if((n2&1) == 1){
    //         count++;
    //     }
    //     n2 = n2>>1;
    // }
    // return count;
    return countSetBits(n1)+countSetBits(n2);
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int result = setBits(num1, num2);
    cout<<"number of set bits is: "<<result<<endl;
}