#include <iostream>
#include <string>
using namespace std;

int search_in_string(string str, char ch)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    string str;
    getline(cin, str);

    char ch;
    cout << "Enter character: ";
    cin >> ch;

    int found_at = search_in_string(str, ch);
    cout << "Character at index: " << found_at << endl;
}