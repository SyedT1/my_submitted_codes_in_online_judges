#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,p,sp=0;
void set_union(){
	cin>>n>>k;
	set<ll>po;
	for(ll i = 0;i<2;i++){
		for(ll j = i?n:k;j>=1;j--){
			cin>>p,po.insert(p);
		}
	}
	for(ll i:po){
	  cout<<i<<(++sp!=po.size()?" ":"\n");
	}
}
int main(){
	set_union();
}
