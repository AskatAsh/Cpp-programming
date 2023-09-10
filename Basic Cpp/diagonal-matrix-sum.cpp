#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                sum = sum + num[i][j];
            }
        }
    }
    cout<<"Sum of Diagonal of a matrix is: "<<sum<<endl;
}
