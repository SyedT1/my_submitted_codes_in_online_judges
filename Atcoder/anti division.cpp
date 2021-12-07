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
ll val(ll A, ll B, ll C) {
	ll left = (A / C) + (A % C > 0);
	if (C * left <= B) {
		ll u ;
		u = ((C * (B / C)) - (C * left)) / C + 1;
		return u;
	} else {
		return 0;
	}
}
void solve() {
	ll A, B, C, D; cin >> A >> B >> C >> D;
	cout << (B - A + 1) - (val(A, B, C) + val(A, B, D) - val(A, B, (C * D) / __gcd(C, D))) << nline;
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}