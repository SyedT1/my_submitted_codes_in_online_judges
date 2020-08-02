#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string spc(ll x){
	string k(x,' ');
	return k;
}
void pyr_(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		cout<<spc(n-i);
	   for(ll j = 1;j<=i;j++){
	   	  cout<<"*"<<(j<i?" ":"\n");
	   }
	}
}
int main(){
	pyr_();
}
