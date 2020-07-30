#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i,x) for(i=1;i<=x;i++)
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
using lo = unsigned long long int;
typedef vector<ll> vi;
typedef vector<lo> vl;
typedef vector<string> vs;
ll x, cs = 1;
string ln;
string hexa(ll n)
{
	map<ll, char>hx{{10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}};
	string hxo;
	while (n) {
		if (n % 16 >= 10 && n % 16 <= 15) {
			hxo = hx[n % 16] + hxo;
		} else {
			hxo = to_string(n % 16) + hxo;
		}
		n /= 16;
	}
	return hxo;
}

string bin(ll n)
{
	string bn;
	while (n) {
		bn = to_string(n % 2) + bn;
		n /= 2;
	}
	return bn;
}
ll dec(string s)
{
	ll fo = 0, ss = s.size();
	for (ll i = 0; i < ss; i++) {
		fo += (s[i] - '0' ? pow(2, ss - (i + 1)) : 0);
	}
	return fo;
}
ll cas = 1;
string modify(string xo, bool *po)
{
	while (xo[0] == '0' || xo[0] == 'x') {
		xo.erase(xo.begin());
		*po = true;
	}
	return xo;
}
void finbas(string k)
{
	bool hex = false;
	k = modify(k, &hex);
	if (hex) {
		ll sm = 0, ki = ll(k.size()), lf[6] = {10, 11, 12, 13, 14, 15}, loc[140] = {};
		loc[ll('A')] = 10, loc[ll('B')] = 11, loc[ll('C')] = 12;
		loc[ll('D')] = 13, loc[ll('E')] = 14, loc[ll('F')] = 15;
		for (ll i = 0; i < ki; i++) sm += ((loc[toupper(k[i])] ? loc[toupper(k[i])] : k[i] - '0') * pow(16, ki - (i + 1)));
		cout << sm << '\n';
	}
	else {
		cout << "0x" << hexa(stoll(k)) << "\n";
	}
}
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output.txt", "w", stdout);
#endif
	while (true) {
		cin >> ln;
		if (ln[0] == '-') {
			break;
		}
		else {
			finbas(ln);
		}
	}
}
