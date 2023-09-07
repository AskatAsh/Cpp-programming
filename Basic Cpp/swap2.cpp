#include<iostream>
using namespace std;
int main()
{
    int num[]={2,4,1,5,6};
    int n = 5;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[i]>num[j]){
                //int temp = num[i];
                //num[i] = num[j];
                //num[j] = temp;
                swap(num[i], num[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
