#include <iostream>
#include <iomanip>
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
    for (longint i = 1, m = in(); i <= m; i++)
        cout << string(m - i, ' ') << string(i, '#') << '\n';
}
