#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using longint = long long int;
int main()
{
    longint m;
    cin >> m;
    vector<longint> v(m);
    for (longint &i : v)
        cin >> i;
    stable_sort(v.begin(), v.end());
    longint q;
    cin >> q;
    while (q--)
    {
        longint des = -1;
        longint sys;
        cin >> sys;
        longint L = 0, R = m - 1;
        while (L <= R)
        {
            longint mid = L + (R - L) / 2;
            if (v[mid] <= sys)
                L = des = mid + 1;
            else
                R = mid - 1;
        }
        cout << (des > 0) * des << endl;
    }
}
