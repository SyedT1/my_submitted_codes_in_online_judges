#include<bits/stdc++.h>
#include <fstream>
#include <sstream>
#define nline '\n'
#define len(s) ll((s).size())
#define pb push_back
#define pp pop_back
#define loop(x, n) for(int x = 0; x < n; ++ x)
using namespace std;
using ll = long long int;
using par = pair<ll, ll>;

template <typename T>
ostream &operator<<(ostream &out, pair<T, T>p) {
	out << p.first << ' ' << p.second;
	return out;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> v)
{
	for (T i : v)
	{
		out << i << ' ';
	}
	return out;
}
istream &operator>>(istream &in, vector<ll> &v)
{
	for (ll &i : v)
	{
		cin >> i;
	}
	return in;
}
void fop_cl()
{
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
}
int main()
{
	//fop_cl();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m; cin >> n >> m;
	vector<ll>vA(n), res;
	for (ll &i : vA) {
		cin >> i;
	}
	sort(vA.begin(), vA.end());
	while (m--) {
		ll input; cin >> input;
		ll found = -1, low = 0, high = n - 1;
		while (low <= high) {
			ll mid = low + (high - low) / 2;
			if (vA[mid] > input) {
				high = mid - 1;
			} else {
				found = low = mid + 1;
			}
		}
		res.push_back(found * (found > -1));
	}
	cout << res << endl;
	return 0;
}
