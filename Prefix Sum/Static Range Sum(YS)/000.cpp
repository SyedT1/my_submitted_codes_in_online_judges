#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("op.txt", "w", stdout);
	ll n, q; cin >> n >> q;
	vector<ll>prefixSum(n, 0);
	for (ll i = 0; i < n; i++) {
		ll val; cin >> val;
		prefixSum[i] += (val + (i > 0) * prefixSum[i - 1]);
	}
	while (q--) {
		ll l, r; cin >> l >> r;
		cout << prefixSum[r - 1] - (l > 0)*(prefixSum[l - 1]) << endl;
	}
}
