#include<bits/stdc++.h>
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
typedef vector<ll> vi;
ll k;
void sogo()
{
	cin>>k;
	vi vo(k);
	ll sm = 0,ci=0;
	for(ll &i:vo){
		cin>>i;
		sm+=i;
	}
	double av = sm/double(k);
	for(ll i:vo){
		if(i>av){
			ci++;
		}
	}
	cout<<sp(3)<<(ci/double(k))*100<<"%\n";
}
int main()
{
	ll n;
	cin>>n;
	while(n--){
	  sogo();
	}
}
