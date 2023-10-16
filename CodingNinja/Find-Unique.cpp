#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    int size = 7;
    int r = findUnique(arr, size);
    cout<<r<<endl;
}
