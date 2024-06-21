#include <iostream>
using namespace std;

void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern_4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void pattern_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern_7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_8(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int k = i;
        if (i > n)
            k = 2 * n - i;
        for (int j = 0; j < k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_11(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            // if(i==j || (i-j)%2 == 0) cout<<"1 ";
            // else cout<<"0 ";
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern_12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern_13(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k = k + 1;
        }
        cout << endl;
    }
}
void pattern_14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}
void pattern_15(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}
void pattern_16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }
}
void pattern_17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << char(j + 'A') << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << char(j - 1 + 'A') << " ";
        }
        cout << endl;
    }
}
void pattern_18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j <= n; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}
void pattern_19(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2 * (n - i - 1); j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (i == 0 || i == n - 1)
                cout << "* ";
            else
            {
                if (j == 0 || j == n - 2)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
}
void pattern_22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int bottom = 2*n-2-i;
            int left = j;
            int right = 2*n-2-j;
            int value = n-min(min(top, right), min(bottom, left));
            cout<<value<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern_22(n);

    return 0;
}