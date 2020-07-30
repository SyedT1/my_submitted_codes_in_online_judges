#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll powr(ll k)
{
  ll p = 1;
  for(ll i = 1;i<=k;i++,p*=2);
  return p;
}
int main()
{
	ll n,p;
	cin>>n;
	while(n--){
		cin>>p;
		cout<<powr(p)-1<<"\n";
	}
}
