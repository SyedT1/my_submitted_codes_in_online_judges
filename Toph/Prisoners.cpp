#include<bits/stdc++.h>
#define sp(a) fixed<<setprecision(a)
using namespace std;
using ll = long long int;
ll n,t,ts;
double k;
void avg(){
	cin>>t;
	double sm = 0;
	for(ll i = 1;i<=t;i++){
		cin>>ts,sm+=((1/double(t))*ts);
	}
	cout<<sp(14)<<sm<<"\n";
}
int main(){
	cin>>n;
	while(n--){
		avg();
	}
}
