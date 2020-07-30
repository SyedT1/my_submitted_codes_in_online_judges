#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll powr(ll k)
{
	ll p = 1;
	for(ll i = 1;i<=k;i++){
		p*=3;
	}
	return p;
}
int main()
{
	ll n;
	cin>>n;
	cout<<(n==0?1:powr(n))<<"\n";
	return 0;
}
