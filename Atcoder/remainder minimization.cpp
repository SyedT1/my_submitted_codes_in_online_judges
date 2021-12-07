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
	ll l, r; cin >> l >> r;
	set<ll>T;
	for (ll i = l; i <= r; i++) {
		T.insert(i % 2019);
		if (T.size() == 2019) {
			break;
		}
	}
	vector<ll>v;
	for (ll i : T) {
		v.push_back(i);
	}
	ll lenv = v.size();
	ll mn = (v[0] * v[1]) % 2019;
	for (ll i = 0; i < lenv; i++) {
		for (ll j = i + 1; j < lenv; j++) {
			mn = min(mn, (v[i] * v[j]) % 2019);
		}
	}
	cout << mn << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}