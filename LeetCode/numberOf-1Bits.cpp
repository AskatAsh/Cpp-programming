#include <bits/stdc++.h>
using namespace std;
int main()
{
    int32_t n = 11111111111111111111111111111101;

    int count = 0;
    while (n != 0)
    {
        if ((n & 1) != 0)
        {
            count++;
        }
        n = n >> 1;
    }
    cout<<count<<endl;
}