#include <iostream>
using namespace std;
using longint = long long int;
int main()
{
    longint n;
    cin >> n;
    longint a[10] = {};
    while (n--)
    {
        longint Sin;
        cin >> Sin;
        a[Sin]++;
    }
    string num;
    for (longint i = 9; i >= 0; i--)
        while (a[i]--)
            num += char('0' + i);
    cout << num << endl;
}
