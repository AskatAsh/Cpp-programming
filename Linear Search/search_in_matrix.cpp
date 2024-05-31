#include <iostream>
#include <vector>
#include <string>
using namespace std;

string matrix2D_search(int **arr, int m, int n, int value)
{
    for (int i = 0; i < m; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == value)
            {
                return to_string(i) + " " + to_string(j);
            }
        }
    }
    return "-1";
}

int main()
{
    int m, n, value;
    cout << "Enter array size (row/column): ";
    cin >> m >> n;

    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    if (m <= 0 || n <= 0)
    {
        cout << "row column size cannot be 0 0" << endl;
        return 0;
    }

    cout << "Enter array elements row/column:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter value to find: ";
    cin >> value;

    string ans = matrix2D_search(arr, m, n, value);
    ans == "-1" ? cout << "Value not found" << endl : cout << "Found value at position: " << ans << endl;

    for(int i=0; i<m; i++){
        delete [] arr[i];
    }
    delete[] arr;
}