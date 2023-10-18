#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    if(row != col){
        cout<<"Diagonal Not Possible!"<<endl;
        return 0;
    }
    for(int i=0; i<row; i++){
        for(int j=col-1; j>=0; j--){
            if(i+j == row-1){
                continue;
            }
            if(arr[i][j] > 0 || arr[i][j] < 0){
                cout<<"Not Diagonal!"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes It's a diagonal Matrix"<<endl;
}