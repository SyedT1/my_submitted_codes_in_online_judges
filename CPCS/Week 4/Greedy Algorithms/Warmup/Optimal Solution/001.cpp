#include <iostream>
using namespace std;
using longint = long long int;
int main()
{
    longint n;
    cin >> n;
    longint change = 0;
    longint a[] = {1, 5, 10};
    for (longint i = 2; i >= 0; i--)
        while (a[i] <= n && n > 0)
        {
            n -= a[i];
            change++;
        }
    cout << change << endl;
    return 0;
}
