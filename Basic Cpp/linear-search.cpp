#include<bits/stdc++.h>
using namespace std;

int powerOfTwo(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(num == arr[i]){
            cout<<"found "<<num<<" at index "<<i<<endl;
            return 1;
        }
    }
    return 0;
}
int main(){
    int numbers[8] = {1, 32, 7, 8, 9, 16, 5, 4};
    int size = 8;
    int findNum = 7;
    int found = powerOfTwo(numbers, size, findNum);
    if(found == 0){
        cout<<findNum<<" does not exist in the array"<<endl;
    }
}