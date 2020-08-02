#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,a,b;
void ply(ll x){
	cin>>a>>b;
	cout<<"Case "<<x<<": "<<a+b<<(b-a<0?(b-a)*(-1):b-a)<<"\n";
}
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		ply(i);
	}
}
