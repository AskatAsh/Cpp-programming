#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,my_col;
    cin>>row>>col;
    int num[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>num[i][j];
        }
    }
    cout<<"enter required column: ";
    cin>>my_col;
    for(i=0;i<row;i++){
        cout<<num[i][my_col]<<endl;
    }
}
