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
	set<ll>v;
	unordered_map<ll, ll>MP;
	for (ll i = 0; i < n; i++) {
		ll y; cin >> y;
		v.insert(y);
		MP[y]++;
	}
	ll exl = 0;
	for (ll i : v) {
		exl += (MP[i] % 2);
	}
	cout << exl << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}