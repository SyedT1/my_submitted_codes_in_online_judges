#include<bits/stdc++.h>
#define ro(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define pp pop_back
#define F first
#define S second
#define FOR(i,x) for(i=1;i<=x;i++)
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
using lo = unsigned long long int;
typedef vector<ll> vi;
typedef vector<lo> vl;
typedef vector<ll> vi;
typedef pair<ll, ll> par;
string k, val_seq = "UUDDLRLRBA";
void IO() {ios_base:: sync_with_stdio(false); cin.tie(0);}
void READINP()
{
	cin >> k;
	int ks = (int)k.size(), val_s = (int)val_seq.size(), ap = 0;
	if (ks < val_s) {
		cout << ap << "\n";
		return;
	}
	for (int i = 0; i <= ks - val_s; i++) {
		bool eo = true;
		for (int j = i, q = 0; j < i + val_s; j++) {
			if (k[j] != val_seq[q++]) {
				eo = false;
				break;
			}
		}
		ap += (eo ? 1 : 0);
	}
	cout << ap << "\n";
}
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for getting output from output.txt
	freopen("output.txt", "w", stdout);
#endif
	//Starts here
	IO();
	READINP();
}
