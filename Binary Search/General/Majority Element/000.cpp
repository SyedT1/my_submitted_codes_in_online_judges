#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
using longint = long long int;
bool comp(longint x, longint y)
{
    return x < y;
}
longint binary_search(vector<longint> v, longint s, longint tar, bool T)
{
    longint res = -1;
    longint L = 0, R = s - 1;
    while (L <= R)
    {
        longint mid = L + (R - L) / 2;
        if (v[mid] == tar)
        {
            res = mid;
            (T ? R : L) = mid + (T ? -1 : 1);
        }
        else if (v[mid] < tar)
            L = mid + 1;
        else
            R = mid - 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    longint n;
    cin >> n;
    vector<longint> vec(n);
    for (longint &i : vec)
        cin >> i;
    //find the majority element
    pair<longint, longint> num{-1, -1};
    sort(vec.begin(), vec.end(), comp);
    for (longint i = 0; i < n; i++)
    {
        longint first_oc = binary_search(vec, n, vec[i], true);
        longint last_oc = binary_search(vec, n, vec[i], false);
        num = max(num, {last_oc - first_oc + 1, vec[i]});
    }
    if (num.first < n / 2 + 1)
        cout << "majority element not found\n";
    else
        cout << num.second << " occured " << num.first << " times\n";
}
