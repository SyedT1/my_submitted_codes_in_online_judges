#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k, l;
ll n, shift = 13;
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output2.txt", "w", stdout);
#endif
	while (getline(cin, k)) {
		for (char c : k) {
			if (isalpha(c)) {
				if (isupper(c)) {
					cout << char((c - 'A') - shift < 0 ? 'Z' - abs(shift - (c - 'A')) + 1 : c - shift);
				} else {
					cout << char((c - 'a') - shift < 0 ? 'z' - abs(shift - (c - 'a')) + 1 : c - shift);
				}
			} else {
				cout << c;
			}
		}
		cout << '\n';
	}
}
