#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    int result;
    if (num >= 0)
    {
        result = decimalToBinary(num);
        cout << result << endl;
    }
    else{
        num = num * (-1);
        result = decimalToBinary(num);
        cout<<result<<endl;
        int newResult = (~result);
        cout<<newResult<<endl;
        newResult = newResult + 1;
        cout<<newResult<<endl;
    }
}