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
ll n;
string a, b;
string peek(string s){
	ll ni = int(s.size());
	while (s[ni - 1] == '0') {
		if (ni == 1) {
			break;
		}
		ni--;
	}
	s.erase(ni);
	reverse(ro(s));
	return s;
}
void IO() {ios_base:: sync_with_stdio(false); cin.tie(0);}
void ReadINP()
{
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << a << (peek(a) == peek(b) ? " = " : (peek(a).size() == peek(b).size() ? (peek(a) < peek(b) ? " < " : " > ") : (peek(a).size() < peek(b).size() ? " < " : " > "))) << b << "\n";
	}
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
	ReadINP();
}#include<bits/stdc++.h>
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
ll n;
string a, b;
string peek(string s){
	ll ni = int(s.size());
	while (s[ni - 1] == '0') {
		if (ni == 1) {
			break;
		}
		ni--;
	}
	s.erase(ni);
	reverse(ro(s));
	return s;
}
void IO() {ios_base:: sync_with_stdio(false); cin.tie(0);}
void ReadINP(){
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << a << (peek(a) == peek(b) ? " = " : (peek(a).size() == peek(b).size() ? (peek(a) < peek(b) ? " < " : " > ") : (peek(a).size() < peek(b).size() ? " < " : " > "))) << b << "\n";
	}
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
	ReadINP();
}
