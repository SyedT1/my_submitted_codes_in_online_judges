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
	while (getline(cin, k)) {
		for (ll i = 0, asterisk = 0, underscore = 0, ks = k.size(); i < ks; i++) {
			if (k[i] == '_') {
				cout << ((underscore) & 1 ? "</i>" : "<i>");
				underscore++;
				continue;
			} else if (k[i] == '*') {
				cout << ((asterisk) & 1 ? "</b>" : "<b>");
				asterisk++;
				continue;
			}
			cout << k[i];
		}
		cout << '\n';
	}
}
