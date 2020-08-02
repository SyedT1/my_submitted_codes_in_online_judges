#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k;
bool isodd(ll x){
	return x&1?1:0;
}
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cin>>k;
		cout<<"Case "<<i<<": ";
		while(!isodd(k)){
			k/=2;
		}
		cout<<k<<"\n";
	}
	return 0;
}
