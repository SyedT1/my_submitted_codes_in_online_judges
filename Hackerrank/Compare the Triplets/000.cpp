#include <iostream>
using namespace std;
using longint = long long int;
longint in()
{
    long x;
    cin >> x;
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    longint a[] = {in(), in(), in()}, b[] = {in(), in(), in()}, res[3] = {};
    for (longint i = 0; i < 3; i++)
    {
        res[(a[i] > b[i]) + 2 * (b[i] > a[i])]++;
    }
    cout << res[1] << ' ' << res[2] << '\n';
}
