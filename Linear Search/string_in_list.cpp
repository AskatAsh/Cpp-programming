#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int find_string(string arr[], int n, string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if (n <= 0)
        return -1;
    else
    {
        for (int i = 0; i < n; i++)
        {
            string temp = arr[i];
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            if(temp == str){
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int n, value;
    cout << "Enter array size: ";
    cin >> n;
    string arr[n], str;
    cin.ignore();

    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }

    cout << "Enter string to find: ";
    getline(cin, str);

    int found = find_string(arr, n, str);
    found == -1 ? cout<<"String Not Found"<<endl : 
    cout<<"String found at index: "<<found<<endl;
}