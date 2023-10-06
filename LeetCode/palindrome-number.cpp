#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int ans = 0;
    int n = x;
    while (n != 0)
    {
        int r = n % 10;
        if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
            // return 0;
            cout<<0<<endl;
        }
        ans = ans * 10 + r;
        n = n / 10;
    }
    if(x != ans || x<0){
        cout<<false<<endl;
    }
    cout<<true<<endl;
}