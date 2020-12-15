#include<iostream>
#include<vector>
#include<set>
#include<cmath>
#define pb push_back
using namespace std;
using ll = long long int;
int main() {
	ll ly[101]={},sum = 0,n;cin>>n;
	vector<ll>vo;
	for(ll x, y; n--;) {
		cin >> x >> y;ly[y]++;
		vo.pb(x);
	}
	for(ll i:vo){
	   if(ly[i]){
	   	 sum += ly[i];
	   }
	}
	cout<<sum<<'\n';
	return 0;
}
