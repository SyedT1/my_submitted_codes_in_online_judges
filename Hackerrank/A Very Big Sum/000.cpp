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
    longint n, sm = 0;
    cin >> n;
    while (n--)
        sm += in();
    cout << sm << '\n';
}
