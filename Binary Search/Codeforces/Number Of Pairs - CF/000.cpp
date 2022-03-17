#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using longint = long long int;
void solve()
{
    longint n, l, r;
    cin >> n >> l >> r;
    vector<longint> v(n);
    for (longint &i : v)
        cin >> i;
    stable_sort(v.begin(), v.end());
    longint sum = 0;
    longint first_occ = -1, last_occ = -1;
    for (longint i = 0; i < n - 1; i++)
    {
        longint left = i + 1, right = n - 1, num = -1;
        while (left <= right)
        {
            longint mid = left + (right - left) / 2;
            if (v[i] + v[mid] >= l && v[i] + v[mid] <= r)
            {
                num = v[i] + v[mid];
                right = mid - 1;
                first_occ = mid;
            }
            else if (v[i] + v[mid] < l)
            {
                left = mid + 1;
            }
            else if (v[i] + v[mid] > r)
                right = mid - 1;
        }
        left = i + 1, right = n - 1;
        while (left <= right)
        {
            longint mid = left + (right - left) / 2;
            if (v[i] + v[mid] >= l && v[i] + v[mid] <= r)
            {
                num = v[i] + v[mid];
                left = mid + 1;
                last_occ = mid;
            }
            else if (v[i] + v[mid] < l)
            {
                left = mid + 1;
            }
            else if (v[i] + v[mid] > r)
                right = mid - 1;
        }
        sum += (last_occ - first_occ + 1) * (num > 0);
    }
    cout << sum << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    longint q;
    cin >> q;
    while (q--)
        solve();
}
