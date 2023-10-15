#include<bits/stdc++.h>
using namespace std;

int numOfSetBits(int num){
    int count = 0;
    while(num){
        num = num & (num-1);
        count++;
    }
    return count;
}
void powerOfTwo(int arr[], int size){
    for(int i=0; i<size; i++){
        int setBits = numOfSetBits(arr[i]);
        if(setBits == 1){
            cout<<arr[i]<<" is power of 2"<<endl;
        }
    }
}
int main(){
    int numbers[8] = {1, 32, 7, 8, 9, 16, 5, 4};
    powerOfTwo(numbers, 8);
}