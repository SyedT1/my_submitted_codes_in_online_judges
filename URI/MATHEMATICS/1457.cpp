#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
string k;
ll morac(string s)
{
	string ts;
	ll i = 0;
	while(s[i]!='!'){
		ts+=s[i];
		i++;
	}
	ll to = stoi(ts),p = 1;
	i = s.size()-i;
	for(ll j = 0;to-(i*j)>=1;j++){
		p*=(to-(i*j));
	}
	return p;
}
int main()
{
	ll n;
	cin>>n;
	while(n--){
		cin>>k;
		cout<<morac(k)<<"\n";
	}
}
