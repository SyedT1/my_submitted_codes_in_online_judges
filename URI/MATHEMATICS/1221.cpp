#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
string f(ll n)
{
	for(ll i = 2;i*i<=n;i++){
		if(n%i==0){
			return "Not Prime";
		}
	}
	return n==1?"Not Prime":"Prime";
}

int main()
{
  ll a,t;
  cin>>t;
  while(t--){
  	cin>>a;
  	cout<<f(a)<<"\n";
  }
  return 0;
}
