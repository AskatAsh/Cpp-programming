#include <iostream>
#include <algorithm>
using namespace std;

void array_intersection(int array_A[], int m, int array_B[], int n)
{
    int found = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array_B[i] == array_A[j]){
                cout<<array_B[i]<<" ";
                found = 1;
            }
        }
    }
    if(found == 0) cout<<"Empty Set"<<endl;
}

int main()
{
    int m, n;

    cin >> m;
    int array_A[m];

    for (int i = 0; i < m; i++)
    {
        cin >> array_A[i];
    }
    sort(array_A, array_A+m);

    cin >> n;
    int array_B[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array_B[i];
    }
    sort(array_B, array_B+n);

    array_intersection(array_A, m, array_B, n);
    
}