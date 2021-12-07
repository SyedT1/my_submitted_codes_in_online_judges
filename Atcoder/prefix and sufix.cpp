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
	ll n; cin >> n;
	ll mx = 0;
	pair<ll, ll>p{ -1, -1};
	string s, t; cin >> s >> t;
	for (ll i = 0; i < n; i++) {
		ll j = i, k = 0, init = i, finish = i;
		bool ck = false;
		while (s[j] == t[k] && j < n && k < n) {
			finish = j;
			ck = true;
			j++;
			k++;
		}

		if (ck == true) {
			if (mx < finish - init + 1) {
				mx = finish - init + 1;
				p = {init, finish};
			}
		}
	}
	if (mx > 0) {
		ll trbc = n - p.second;
		s.erase(s.begin() + p.first, s.end() - trbc + 1);
	}
	cout << (s + t).length() << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}