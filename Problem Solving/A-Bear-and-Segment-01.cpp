#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str;
        int first = str.find_first_of('1');
        int last = str.find_last_of('1');
        bool found = false;
        
        if (first == -1)
        {
            cout << "NO" << endl;
        }
        else if(first == last)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            for (int i = first + 1; i < last; i++)
            {
                if (str[i] == '0')
                {
                    found = false;
                    break;
                }
                else
                {
                    found = true;
                }
            }
            if (found)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}