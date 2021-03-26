#include <iostream>
using namespace std;
using ll = long long int;
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll range;
        cin >> range;
        --range;
        ll n3 = range / 3, n5 = range / 5, n15 = range / 15;
        n3 = (n3 * (n3 + 1)) / 2, n5 = (n5 * (n5 + 1)) / 2, n15 = (n15 * (n15 + 1)) / 2;
        cout << (3 * n3) + (5 * n5) - (15 * n15) << '\n';
    }
}
