#include <iostream>
#include <vector>
using namespace std;
using ulongint = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ulongint n, q;
    cin >> n >> q;
    vector<ulongint> vec(n);
    for (ulongint &i : vec)
        cin >> i;
    while (q--)
    {
        ulongint t;
        cin >> t;
        ulongint left = 0, right = n - 1, res = -1;
        while (left <= right)
        {
            ulongint mid = left + (right - left) / 2;
            if (vec[mid] == t)
            {
                res = mid;
                right = mid - 1;
            }
            else if (vec[mid] < t)
                left = mid + 1;
            else
                right = mid - 1;
        }
        cout << res << '\n';
    }
    return 0;
}
