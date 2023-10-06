#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {2,7,11,15,4,6}, target = 9;
    int len = sizeof(nums)/sizeof(int);
    // int len = nums.size();
    // cout<<len<<endl;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(nums[i] + nums[j] == target){
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }
}