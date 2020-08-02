#include<bits/stdc++.h>
using namespace std;
using lo  = unsigned long long int;
using ll = long long int;
lo k;
string fc(ll x)
{
	lo p = 1;
	for(ll i = 1;i<=x;i++){
		p*=i;
	}
	string sfc,fx = to_string(p);
	if(fx.size()<4){
		string k(4-fx.size(),'0');
		fx = k + fx;
		return fx;
	}
	for(ll i = fx.size()-1;i>=fx.size()-4;i--){
		sfc = fx[i]+sfc;
	}
	return sfc;
}
void facto()
{
	cin>>k;
	cout<<(k<=20?fc(k):"0000")<<"\n";
}
int main()
{
	facto();
}
