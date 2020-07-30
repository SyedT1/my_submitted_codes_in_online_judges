#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll f(ll ki)
{
	ll p = 1;
	for(ll i = 1;i<ki;i++,p*=i);
	return p;
}
ll bigo(string s)
{
	ll sm = 0,ln = s.size()-1;
	for(ll i = ln,fc=1;i>=0;i--,fc++){
		sm+=((s[i]-'0')*f(fc));
	}
	return sm;
}
int main()
{
	ll n;
	while(true){
		cin>>n;
		if(n==0){
			break;
		}
		cout<<bigo(to_string(n))<<"\n";
	}
}
