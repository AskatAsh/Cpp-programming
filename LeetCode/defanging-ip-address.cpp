#include <bits/stdc++.h>
using namespace std;
int main()
{
    string address;
    address = "255.100.50.0";
    string str;
    for (int i = 0; i < address.size(); i++)
    {
        if (address.at(i) == '.') str += "[.]";
        else str += address.at(i);
    }
    cout<<str<<endl;
}