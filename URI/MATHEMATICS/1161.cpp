#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
ll f(ll n)
{
	ll p = 1;
	for(ll i = 1;i<=n;i++){
		p*=i;
	}
	return p;
}

int main()
{
  ll a,b;
  while(cin>>a>>b){
  	cout<<f(a)+f(b)<<"\n";
  }
  return 0;
}
