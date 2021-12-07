#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<cmath>
#include<algorithm>
#define nline '\n'
#define pb push_back
using namespace std;
using ll = long long int;
void focl() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void solve() {
	ll n, k; cin >> n >> k;
	vector<pair<ll, ll>>p;
	vector<ll>v;
	unordered_map<ll, ll>MP;
	for (ll i = 0; i < n; i++) {
		ll y; cin >> y;
		if (!MP[y]) {
			v.pb(y);
		}
		MP[y]++;
	}
	ll lenv = v.size();
	if (lenv <= k) {
		cout << 0 << nline;
		return;
	}
	for (ll i : v) {
		p.pb({MP[i], i});
	}
	ll extra = lenv - k;
	sort(p.rbegin(), p.rend());
	ll total = 0;
	while (extra > 0) {
		total += p.back().first;
		p.pop_back();
		extra--;
	}
	cout << total << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}