#include <iostream>
#include <vector>
#include <limits>
using namespace std;
int greater_than_or_equal(vector<int> p, int left, int right, int tar)
{
    bool r = 0;
    int ans = 0;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (p[middle] >= tar)
        {
            ans = p[middle];
            r = true;
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    if (r)
        return ans;
    else
        throw "not found";
}
int main()
{
    int tar;
    cin >> tar;
    try
    {
        cout << greater_than_or_equal({1, 11, 12, 13, 14, 15}, 0, 5, tar) << '\n';
    }
    catch (char *s)
    {
        cout << s << '\n';
    }
}
