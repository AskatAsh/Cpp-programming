#include <iostream>
#include <vector>
using namespace std;

vector<int> sort_two_array(vector<int> &arr1, vector<int> &arr2)
{
    int total_size = arr1.size() + arr2.size();
    vector<int> ans;
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < total_size; i++)
    {
        if (idx1 == arr1.size())
        {
            ans.push_back(arr2[idx2]);
            idx2++;
        }
        else if(idx2 == arr2.size())
        {
            ans.push_back(arr1[idx1]);
            idx1++;
        }
        else if (arr1[idx1] > arr2[idx2])
        {
            ans.push_back(arr1[idx1]);
            idx1++;
        }
        else
        {
            ans.push_back(arr2[idx2]);
            idx2++;
        }
    }
    return ans;
}

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size1, size2;
    cout << "Enter array-1 size: ";
    cin >> size1;

    vector<int> arr1(size1);
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter array-2 size: ";
    cin >> size2;

    vector<int> arr2(size2);
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = sort_two_array(arr1, arr2);
    print_array(ans);
}