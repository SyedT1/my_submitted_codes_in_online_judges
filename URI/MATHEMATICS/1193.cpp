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
ll x,cs=1;
string ln;
string hexa(ll n)
{
	map<ll,char>hx{{10,'a'},{11,'b'},{12,'c'},{13,'d'},{14,'e'},{15,'f'}};
	string hxo;
	while(n){
		if(n%16>=10 && n%16<=15){
			hxo = hx[n%16]+hxo;
		}else{
			hxo = to_string(n%16) + hxo;
		}
		n/=16;
	}
	return hxo;
}

string bin(ll n)
{
	string bn;
	while(n){
		bn = to_string(n%2) + bn;
		n/=2;
	}
	return bn;
}
ll dec(string s)
{
	ll fo = 0,ss=s.size();
	for(ll i = 0;i<ss;i++){
		fo+=(s[i]-'0'?pow(2,ss-(i+1)):0);
	}
	return fo;
}
ll cas = 1;
void finbas(string k)
{
	cout<<"Case "<<cas++<<":\n";
	string ko,chk;
	ll ia = -1;
	bool kp = false;
	while(k[++ia]!='\0'){
		if(k[ia]==' '){
			kp = true;
			continue;
		}
		(kp?chk:ko)+=k[ia];
	}
	if(chk=="bin"){
		cout<<dec(ko)<<" dec\n"<<hexa(dec(ko))<<" hex\n\n";
	}
	else if(chk=="hex"){
		ll smo = 0,kmo = ko.size();
		map<char,ll>hx{{'a',10},{'b',11},{'c',12},{'d',13},{'e',14},{'f',15}};
		for(ll i = 0;i<kmo;i++){
			smo+=((ko[i]>='a' && ko[i]<='f'?hx[ko[i]]:int(ko[i]-'0'))*pow(16,kmo-(i+1)));
		}
		cout<<smo<<" dec\n"<<bin(smo)<<" bin\n\n";
	}
	else{
		cout<<hexa(stoll(ko))<<" hex\n"<<bin(stoll(ko))<<" bin\n\n";
	}
}
void base_conversion()
{
   cin>>x;
   for(ll i = 1;i<=x;i++){
   	  if(i==1)cin.ignore();
   	  getline(cin,ln);
   	  finbas(ln);
   }
}
int main()
{
   base_conversion();
}
