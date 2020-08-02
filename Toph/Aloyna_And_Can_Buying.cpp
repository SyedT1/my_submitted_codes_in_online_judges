#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
using ll = long long int;
ll n,k,lop[101]={},s=0,mxoc=0,p,sr=0;
int main(){
	cin>>n>>k;
	pair<ll,ll>po[k];
	for(ll i = 1;i<=n;i++){
		cin>>p,lop[p]++;
	}
	for(ll i = 0;i<101;i++){
		if(lop[i]){
			po[s++]=make_pair(lop[i],i);
			mxoc=max(mxoc,lop[i]);
		}
	}
	sort(po,po+k);
	for(ll i = 0;i<k;i++){
		if(po[i].F==mxoc){
			cout<<po[i].S<<"\n";
			return 0;
		}
	}
}
