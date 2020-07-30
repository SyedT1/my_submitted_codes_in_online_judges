#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k, l;
ll n, shift;
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output2.txt", "w", stdout);
#endif
	cin >> n;
	while (n--) {
		cin >> k >> shift;
		for (char c : k) {
			cout << char((c - 'A') - shift < 0 ? 'Z' - (shift - (c - 'A')) + 1 : c - shift);
		}
		cout << '\n';
	}
}
