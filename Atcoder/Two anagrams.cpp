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
	string s, t; cin >> s >> t;
	sort(s.begin(), s.end());
	sort(t.rbegin(), t.rend());
	if (s < t) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}
int main() {
	focl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}