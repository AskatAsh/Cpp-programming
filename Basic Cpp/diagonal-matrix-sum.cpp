#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,sum = 0;
    cout<<"enter number of row and col: ";
    cin>>row>>col;
    int num[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>num[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                sum = sum + num[i][j];
            }
        }
    }
    cout<<"Sum of Diagonal of a matrix is: "<<sum<<endl;
}
