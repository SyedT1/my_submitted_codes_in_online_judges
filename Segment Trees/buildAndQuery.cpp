#include <bits/stdc++.h>
using namespace std;
using LL = long long int;
#define MAX LL(1e5)
LL tree[4 * MAX + 5], arr[MAX], n;
void build(LL start, LL end, LL node)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }
    build(start, (start + end) / 2, node + node);
    build((start + end) / 2 + 1, end, node + node + 1);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
LL query(LL start, LL end, LL L, LL R, LL node)
{
    if (L <= start && end <= R)
    {
        return tree[node];
    }
    // end L     R start
    if (end < L || start > R)
    {
        return 0;
    }
    return query(start, (start + end) / 2, L, R, node + node) + query((start + end) / 2 + 1, end, L, R, node + node + 1);
}
int main()
{
    cin >> n;
    for (LL i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    build(0, n - 1, 1);
    LL Queries;
    cin >> Queries;
    while (Queries--)
    {
        LL from, to;
        cin >> from >> to;
        cout << query(0, n - 1, from, to, 1) << endl;
    }
}