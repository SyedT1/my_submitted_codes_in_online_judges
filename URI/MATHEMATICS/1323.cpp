#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll limo(ll k)
{
	ll p = 0;
	for(ll i = 1;i<=k;i++){
		p+=(i*i);
	}
	return p;
}
int main()
{
	ll a;
	while(true){
		cin>>a;
		if(a){
			cout<<limo(a)<<"\n";
		}
		else{
			break;
		}
	}
}
