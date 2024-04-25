#include <iostream>
#include <regex>
#include <string>
#include <iomanip>
using namespace std;

bool isPrice(string &word)
{
    if (word.empty() || word[0] != '$')
    {
        return false;
    }
    for (int i = 1; i < word.size(); i++)
    {
        if (!isdigit(word[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string sentence = "$76111 ab $6 $";
    stringstream str(sentence);
    string word;
    int discount = 50;
    double discountPrice;
    string result;
    ostringstream oss;

    while (str >> word)
    {
        // cout<<word<<endl;
        if (isPrice(word))
        {
            word.erase(0, 1);
            if (!word.empty())
            {
                discountPrice = stod(word) - ((discount * stod(word)) / 100);
                oss << "$" << fixed << setprecision(2) << discountPrice << " ";
            }
            else{
                oss<<"$"<<" ";
            }
        }
        else
        {
            oss << word << " ";
        }
    }

    result = oss.str();
    result.pop_back();
    cout << result << endl;
}
