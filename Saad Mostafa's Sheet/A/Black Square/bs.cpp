#include<iostream>
#include<cmath>
using namespace std;
using ll = long long int;
void IO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	//IO();
	ll lly[4] = {}, sm = 0; for (ll &i : lly) {
		cin >> i;
	}
	string s; cin >> s; for (char c : s) {
		sm += lly[(int(c - '0')) - 1];
	}
	cout << sm << '\n';
}
