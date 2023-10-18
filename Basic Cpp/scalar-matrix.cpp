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
        for(int j=0; j<col; j++){
            if(i==j){
                continue;
            }
            if(arr[i][j] > 0 || arr[i][j] < 0){
                cout<<"Not Diagonal!"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes It's a diagonal Matrix"<<endl;
    int save;
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                if(i==0 && j==0){
                    save = arr[i][j];
                }
                else{
                    if(save != arr[i][j]){
                        cout<<"Not scalar or identity matrix!"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"Yes It's a scalar matrix"<<endl;
    if(save == 1){
        cout<<"It's an identity matrix"<<endl;
    }
}