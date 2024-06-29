#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p = {4, 5};
    cout << "first: " << p.first << " second: " << p.second << endl;

    pair<int, pair<int, int>> nested = {3, {4, 5}};
    cout << "first: " << nested.first << " first in nested second: " << nested.second.first << endl;

    // pair in array;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << "pair in array: " << arr[2].first << endl;
}