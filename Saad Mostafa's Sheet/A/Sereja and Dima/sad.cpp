#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
using ll = long long int;
void Logged() {
	ll n, sr = 0, dm = 0; cin >> n;
	vector<ll>vo(n); for (ll &i : vo) {
		cin >> i;
	}
	for (ll i = 0, li = 1; i < n; li++) {
		(li % 2 ? sr : dm) += (vo[i] > vo[n - 1] ? vo[i++] : vo[(-1) + (n--)]);
	}
	cout << sr << ' ' << dm << '\n';
	return;
}
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	//IO();
	Logged();
}
