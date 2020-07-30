#include<bits/stdc++.h>
#define MOD 2147483647
using namespace std;
using ll = unsigned long long int;
ll n;
ll bin_expon(ll x){
	ll pr = 1,pq = 3;
	while(x>0){
		if(x & 1){
			pr = pr*pq%MOD;
		}
		pq = pq*pq % MOD;
		x >>= 1;
	}
	return pr;
}
int main(){
	cin>>n;
	cout<<bin_expon(n)<<'\n';
}
