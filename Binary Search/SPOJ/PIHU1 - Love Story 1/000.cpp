#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using longint = long long int;
string out[] = {"NO", "YES"};
void solve()
{
    longint N;
    cin >> N;
    vector<longint> vec(N);
    for (longint &i : vec)
        cin >> i;
    longint P;
    cin >> P;
    stable_sort(vec.begin(), vec.end());
    for (longint i = 0; i < N; i++)
    {
        for (longint j = i + 1; j < N; j++)
        {
            longint L = j + 1, R = N - 1;
            while (L <= R)
            {
                longint mid = L + (R - L) / 2;
                if (vec[mid] + vec[i] + vec[j] == P)
                {
                    cout << out[true] << '\n';
                    return;
                }
                else if (vec[mid] + vec[i] + vec[j] < P)
                    L = mid + 1;
                else
                    R = mid - 1;
            }
        }
    }
    cout<<out[false]<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    longint T;
    cin >> T;
    while (T--)
        solve();
}
