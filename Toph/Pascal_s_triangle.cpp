#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,p=1;
void pascal(){
	cin>>n,n--;
	for(ll i = 1;i<=n;i++){
		p*=2;
	}
	cout<<p<<"\n";
}
int main(){
	pascal();
}
