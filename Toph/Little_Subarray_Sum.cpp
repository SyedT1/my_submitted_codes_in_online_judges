#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,k,s,e;
void sum(){
	cin>>n>>s>>e;
	ll arr[n]={};
	for(ll i = 0;i<n;i++){
		cin>>k;
		arr[i]=(i?arr[i-1]+k:k);
	}
	cout<<arr[e]-(s?arr[s-1]:s)<<"\n";
}
int main(){
	sum();
}
