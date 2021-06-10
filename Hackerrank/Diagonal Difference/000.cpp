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
    longint n, sm = 0, leftdiag = 0, rigtdiag = 0;
    cin >> n;
    longint ar[n][n];
    for (longint i = 0; i < n; i++)
        for (longint j = 0; j < n; j++)
            ar[i][j] = in();
    for (longint i = 0; i < n; i++)
    {
        leftdiag += ar[i][i];
        rigtdiag += ar[i][n - i - 1];
    }
    bool cons = leftdiag < rigtdiag;
    cout << (cons ? -1 : 1) * (leftdiag - rigtdiag) << '\n';
}
