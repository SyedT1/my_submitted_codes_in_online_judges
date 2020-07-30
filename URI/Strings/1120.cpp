#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
char a;
string b;
void compute(char c, string y) {
find_and_erase:
	for (ll i = 0, ys = y.size(); i < ys; i++) {
		if (y[i] == c && ys != 1) {
			y.erase(y.begin() + i);
			goto find_and_erase;
		}
	}
	ll k = 0, ys = y.size();
	for (k = 0; y[k] == '0' && k < ys - 1; k++);
	if (c == y[0]) {cout << 0 << '\n'; return;}
	for (; k < ys; k++)cout << y[k];
	cout << '\n';
}
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output1.txt", "w", stdout);
#endif
	while (true) {
		cin >> a >> b;
		if (a == '0' && b == "0") {
			break;
		} else {
			compute(a, b);
		}
	}
}
