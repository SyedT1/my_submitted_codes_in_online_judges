#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,r;
bool prime(ll x){
	for(ll i = 2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return x==1?0:1;
}
void find_r(){
	cin>>n;
	ll np = n-1,nf = n+1;
	while(!prime(np)){
		np--;
	}
	while(!prime(nf)){
		nf++;
	}
	cout<<np<<" "<<nf<<"\n";
}
int main(){
	cin>>r;
	while(r--){
		find_r();
	}
}
