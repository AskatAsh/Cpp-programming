#include<iostream>
using namespace std;
int main(){
    //int *p = (int*)malloc(10*sizeof(int));
    int *p = (int*)calloc(10,sizeof(int));

    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    free(p);
}