#include <iostream>
#include <vector>
using namespace std;

vector<int> search_multiple(int arr[], int target[], int m, int n)
{
    vector<int> ans;
    if (m <= 0 || n <= 0)
        return ans;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (target[i] == arr[j])
            {
                ans.push_back(j);
                found = true;
                break;
            }
        }
        if(!found) ans.push_back(-1);
    }
    return ans;
}
int main()
{
    int m, n;
    cout << "Enter the size of array: ";
    cin >> m;

    int* arr = new int[m]; // dynamic array allocation
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the size of target array: ";
    cin >> n;

    int* target = new int[n];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> target[i];
    }

    vector<int> ans = search_multiple(arr, target, m, n);
    if(ans.size() <= 0) cout<<"Targets can not be found."<<endl;
    else{
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    delete [] arr; // free dynamically allocated memory;
    delete [] target; // free dynamically allocated memory;
}