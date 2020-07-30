#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef vector<ll> vi;
ll ss;
void som(ll k)
{
  cin>>ss;
  vi vo(ss);
  for(ll &i:vo){
  	cin>>i;
  }
  sort(vo.begin(),vo.end());
  cout<<"Case "<<k<<": "<<vo[ss/2]<<"\n";
}
int main()
{
	ll n,i=0;
	cin>>n;
	while(n--){
		som(++i);
	}
}
