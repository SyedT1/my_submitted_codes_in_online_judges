#include<iostream>
#include<cmath>
using namespace std;
using ll = long long int;
int main() {
	ll n = 0; string s; cin >> s; char op = 'a'; for (char c : s) {
		n += min(abs(int(op - c)), 26 - abs(int(op - c)));
		op = c;
	}
	cout << n << '\n';
	return 0;
}
