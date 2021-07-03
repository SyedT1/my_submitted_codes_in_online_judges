#include <iostream>
using namespace std;
using longint = long long int;
int main()
{
    longint n;
    cin >> n;
    longint change = 0;
    longint a[] = {1, 5, 10}, i = 2, k = 0;
    while (n > 0)
    {
        if (a[i] <= n)
        {
            k += (n / a[i]);
            n -= ((n / a[i]) * a[i]);
        }
        i--;
    }
    cout << k << endl;
    return 0;
}
