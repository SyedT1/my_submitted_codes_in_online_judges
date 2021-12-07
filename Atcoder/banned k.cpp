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
	unordered_map<ll, ll>MP;
	ll n; cin >> n;
	vector<ll>v, tt;
	for (ll i = 0; i < n; i++) {
		ll y; cin >> y;
		tt.push_back(y);
		if (!MP[y]) {
			v.push_back(y);
		}
		MP[y]++;
	}
	ll lenv = v.size(), sum = 0;
	for (ll i : v) {
		sum += ((MP[i] * (MP[i] - 1)) / 2);
	}
	for (ll i : tt) {
		if (MP[i] > 1) {
			ll sumsl = sum;
			sumsl -= ((MP[i] * (MP[i] - 1)) / 2);
			ll t = MP[i] - 1;
			cout << sumsl + (t * (t - 1)) / 2 << nline;
		} else {
			cout << sum << nline;
		}
	}
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}