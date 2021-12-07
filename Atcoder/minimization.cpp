#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#define nline '\n'
using namespace std;
using ll = long long int;
void focl() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void solve() {
	ll n, k; cin >> n >> k;
	vector<ll>v(n);
	for (ll &i : v) {
		cin >> i;
	}
	ll sm = 1;
	n -= k;
	k--;
	sm += (n / k);
	n -= (k * (n / k));
	sm += (n > 0);
	cout << sm << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}