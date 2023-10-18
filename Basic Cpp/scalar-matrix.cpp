#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    if (row != col)
    {
        cout << "Not a square matrix!" << endl;
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (arr[i][j] > 0 || arr[i][j] < 0)
                {
                    cout << "The matrix is not Diagonal!" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "The matrix is Diagonal!" << endl;
    int first;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (i == 0 && j == 0)
                {
                    first = arr[i][j];
                }
                else
                {
                    if (first != arr[i][j])
                    {
                        cout << "The matrix is not Scalar!" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "The matrix is Scalar" << endl;
    if (first == 1)
    {
        cout << "The matrix is Identity!" << endl;
    }
}