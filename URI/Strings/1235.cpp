#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll li;
string k;
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output1.txt", "w", stdout);
#endif
	cin >> li;
	for (ll i = 1; i <= li; i++) {
		if (i == 1)cin.ignore();
		getline(cin, k);
		for (ll i = (k.size() / 2) - 1; i >= 0; i--) cout << k[i];
		for (ll i = k.size() - 1; i >= k.size() / 2; i--) cout << k[i];
		cout << '\n';
	}
}
