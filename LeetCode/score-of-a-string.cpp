#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    int count = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        count = count + abs(int(s[i]) - int(s[i+1]));
        // cout<<abs(int(s[i]) - int(s[i+1]))<<" ";
    }
    cout<<count<<endl;
}