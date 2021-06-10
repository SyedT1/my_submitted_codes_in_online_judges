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
    longint n;
    cin >> n;
    long zero, less, more;
    zero = less = more = 0;
    for (longint i = 0; i < n; i++)
    {
        long num = in();
        zero += (num == 0);
        less += (num < 0);
        more += (num > 0);
    }
    cout << fixed << setprecision(6) << more / double(n) << endl
         << less / double(n) << endl
         << zero / double(n) << '\n';
    return 0;
}
