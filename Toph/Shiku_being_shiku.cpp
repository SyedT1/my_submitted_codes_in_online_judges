#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,x;
void fct(){
	cin>>k;
	if(k==0||k==1){
		cout<<"YES\n";
		return;
	}
	ll fbsm = 1,fe = 0, fo = 1;
	while(fbsm<=k){
		fbsm = fe+fo;
		fo = fe;
		fe = fbsm;
		if(fbsm==k){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}
int main(){
	cin>>n;
	while(n--){
		fct();
	}
}
