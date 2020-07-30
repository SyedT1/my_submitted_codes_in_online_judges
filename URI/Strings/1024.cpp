#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll n;
string kl;
int main(){
	cin>>n;
	for(ll i = 1;i<=n;i++){
		if(i==1) cin.ignore();
		getline(cin,kl);
		for(char &c:kl) if(isalpha(c)) c+=3;
		reverse(kl.begin(),kl.end());
		for(ll i = ll(kl.size())/2;i<ll(kl.size());i++) kl[i]=kl[i]-1;
		cout<<kl<<'\n';
	}
}
