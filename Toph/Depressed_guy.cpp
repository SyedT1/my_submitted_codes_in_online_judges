#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n,mx=0;
string k;
void longseq(){
  cin>>n;
  map<string,ll>mp;
  for(ll i = 0;i<n;i++){
  	cin>>k;
  	if(mp[k]>0){
  		mx = max(mx,((i+1)-mp[k])+1);
  		continue;
  	}
  	mp[k]=i+1;
  }
  cout<<(mx?mx:1)<<"\n";
}

int main(){
	longseq();
}
