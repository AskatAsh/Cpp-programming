#include<iostream>
using namespace std;
int main(){
    //int *p = (int*)malloc(10*sizeof(int));
    //int *p = (int*)calloc(10,sizeof(int));
    int *p = new int[10]{23, 12, 10, 27, 32};

    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    //free(p);
    delete p;
}