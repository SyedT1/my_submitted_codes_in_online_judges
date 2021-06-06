#include <iostream>
#define MXN 120
using namespace std;
using longint = long long int;
longint dp[MXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[0] = dp[1] = 1;
    longint n;
    cin >> n;
    //number of ways to represent n as summation of 1's and 2's
    for (longint i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << '\n';
}
