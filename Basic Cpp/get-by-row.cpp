#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,my_row;
    cin>>row>>col;
    int num[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>num[i][j];
        }
    }
    cout<<"enter required row: ";
    cin>>my_row;

    for(j=0; j<col; j++)
    {
        cout<<num[my_row][j]<<" ";
    }
}

