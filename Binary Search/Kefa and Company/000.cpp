#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;
using longint = long long int;
longint n, d;
vector<pair<longint, longint>> v;
longint in()
{
   longint x;
   cin >> x;
   return x;
}
longint rec(longint L, longint tar, bool cons)
{
   longint R = n - 1, occ = -1;
   while (L <= R)
   {
      longint mid = L + (R - L) / 2;
      longint abs_dif = abs(v[mid].first - tar);
      if (abs_dif < d)
      {
         occ = mid;
         (cons ? R : L) = mid + (cons ? -1 : 1);
      }
      else
         R = mid - 1;
   }
   return occ;
}
int main()
{
   cin >> n >> d;
   for (longint i = 0; i < n; i++)
   {
      longint a, b;
      cin >> a >> b;
      v.push_back({a, b});
   }
   stable_sort(v.begin(), v.end());
   vector<longint> prefixsum(n, 0);
   prefixsum[0] = v[0].second;
   for (longint i = 1; i < n; i++)
      prefixsum[i] = prefixsum[i - 1] + v[i].second;
   longint mx = 0;
   for (longint i = 0; i < n; i++)
   {
      longint L = rec(i, v[i].first, true), R = rec(i, v[i].first, false);
      mx = max(mx, prefixsum[R] - (L != 0) * prefixsum[L - 1]);
   }
   cout << mx << '\n';
}
