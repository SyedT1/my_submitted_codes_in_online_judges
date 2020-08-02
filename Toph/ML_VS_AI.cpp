#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
using namespace std;
using ll = long long int;
ll n;
double a,b,qua = 0,av=0;
typedef vector<ll> vi;
void MLE(){
	cin>>n;
	//pair<double,ll>po[n];
	vi vo;
	for(ll i = 0;i<n;i++){
		cin>>a>>b;
		if((a/b)*100>=70 && a>=150){
			vo.pb(a);
		}
		av+=a;
	}
	av/=n;
	for(ll i:vo){
		if(i>=av){
			qua++;
		}
	}
	cout<<qua<<"\n";
}
int main(){
   MLE();
}
