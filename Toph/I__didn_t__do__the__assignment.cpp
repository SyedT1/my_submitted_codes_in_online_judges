#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
bool prime(ll x){
	for(ll i = 2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return x==1?0:1;
}
void pyr(){
	cin>>n;
	if(prime(n)){
		cout<<"NO PUNISHMENT\n";
		return;
	}
	for(ll i = 1;i<=n;i++){
		cout<<"I DID NOT DO THE ASSIGNMENT.\n";
	}
}
int main(){
	pyr();
}
