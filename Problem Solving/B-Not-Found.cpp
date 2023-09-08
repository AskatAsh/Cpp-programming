#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    string str;
    //string str = "fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg";
    //string str = "abcdefghijklmnopqrstuvwxyz";
    cin>>str;
    int len1= s.length();
    int len2= str.length();
    for(int i=0; i<len1; i++)
    {
        int not_found = 0;
        for(int j=0; j<len2; j++)
        {
            if(s[i] != str[j])
            {
                not_found += 1;
            }
            else
            {
                break;
            }
        }
        if(not_found >= len2)
        {
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;

}

