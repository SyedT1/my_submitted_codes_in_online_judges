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
bool Pr_me(ll a)
{
	for(ll i = 2;i*i<=a;i++){
		if(a%i==0){
			return false;
		}
	}
	return a<2?false:true;
}
bool Sup(string s)
{
	ll ss = s.size();
	for(ll i = 0;i<ss;i++){
		if(Pr_me(s[i]-'0')==false){
			return false;
		}
	}
	return true;
}
int main()
{
	ll x;
	while(cin>>x){
		if(Pr_me(x)){
			if(Sup(to_string(x))){
				cout<<"Super\n";
			}
			else{
				cout<<"Primo\n";
			}
		}
		else{
			cout<<"Nada\n";
		}
	}
}
